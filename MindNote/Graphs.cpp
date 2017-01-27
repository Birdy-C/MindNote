#include "mindnote.h"

int cmp(const void *a, const void *b)

{
	return *(int *)a - *(int *)b;
}

/*重设图的data*/
void MindNote::resetIndex(int index) 
{
	for (int i =0; i < list.size(); i++)
	{
		int x = list.at(i)->data(0).toInt();
		if(x >= temp)
		{
			list.at(i)->setData(0, x + index);
		}
	}

	resetTreeIndex(ui.treeWidget->topLevelItem(0),index);
}

/*重设树的data*/
void MindNote::resetTreeIndex(QTreeWidgetItem* item,int index)
{
	int x = item->data(0, 0).toInt();
	if (x >= temp)
		item->setData(0, 0, x + index);
	int childNum = item->childCount();
	for (int i = 0; i < childNum; i++)
	{
		resetTreeIndex(item->child(i),index);
	}

}

/*新建结点*/
void MindNote::reNewTree(QVariant newItem)
{
	depth = 0;
	level = 0;
	flag = 0;
	index = 0;

	list = GraphicsHead->childItems();
	if (list.isEmpty()) return;
	deleteLine();
	reNewTreeNode(newItem, ui.treeWidget->topLevelItem(0));
	resetIndex(1);
	tempText->setData(0, temp);
	list = GraphicsHead->childItems();
	reset();
	return;

}

/*新建结点-更新图*/
void MindNote::reNewTreeNode(QVariant newItem, QTreeWidgetItem* item)
{
	if (NULL == item) return;
	int t = depth;
	int childNum = item->childCount();

	if (0 == childNum)
	{
		if (index == newItem.toInt() && flag == 0 )
		{
			penText[level % 5].setWidth(backWidth);
			QGraphicsRectItem *back = scene.addRect(-10, -2, 60, 24, penText[level % 5], brush[level % 5]);

			back->setFlags(QGraphicsItem::ItemIsSelectable);
			back->setFlags(back->flags()|QGraphicsItem::ItemStacksBehindParent);
			QGraphicsTextItem *text = scene.addText(".",scene.font());
			//text->setTextWidth(40);
			text->setTextInteractionFlags(Qt::TextEditable);
			back->setParentItem(text);
	
			//text->setFlag(QGraphicsItem::ItemIsSelectable);
			text->setParentItem(GraphicsHead);
			text->setPos(level * length, depth * height);
			
			penText[(level-1) % 5].setWidth(lineWidth);
			if (0 != level)
			{
				QGraphicsLineItem *line = scene.addLine(level * length - 15, depth * height + 10,
					level * length, depth * height + 15, penText[(level-1) % 5]);
				line->setParentItem(LineHead);
			}
			//	list = GraphicsHead->childItems();

		//	text->setData(0, index);

			tempText = text;
			temp = index;
			depth++;
			flag = 1;
			//index++;
			return;
		}
		if (findItem(index) < list.size() && findItem(index)>=0)
		{
			{
				QGraphicsItem *temp = list.at(findItem(index));
				((QGraphicsTextItem*)temp)->setFont(scene.font());
				if (temp->childItems().size()>0)
					scene.removeItem(temp->childItems().at(0));

				penText[(level-1) % 5].setWidth(backWidth);
				QGraphicsRectItem *back = scene.addRect(-10, -2, 60, 24, penText[(level-1) % 5], brush[level % 5]);
				back->setParentItem(temp);
				back->setFlags(QGraphicsItem::ItemIsSelectable);
				back->setFlags(back->flags() | QGraphicsItem::ItemStacksBehindParent);
				temp->setPos(level * length, depth * height);

			}

			//list.at(findItem(index))->childItems().at(0)->paint(penText[level % 5]);
			penText[level % 5].setWidth(lineWidth);
			QGraphicsLineItem *line = scene.addLine(level * length - 20, depth * height + 10,
				level * length - 10, depth * height + 10, penText[level % 5]);
			line->setParentItem(LineHead);

			//item->setData(0, 0, index + flag);
		}
		index++;
		depth++;
		return;
	}
	level++;
	int t1, t2;
	{
		int s[50];
		if (childNum > 50) return;
		for (int i = 0; i < childNum; i++)
		{
			s[i] = item->child(i)->data(0, 0).toInt();
		}
		qsort(s, childNum, sizeof(s[0]), cmp);
		for (int i = 0; i < childNum; i++)
		{
			int j ;
			if (i == childNum - 1) t2 = depth;
			for (j = 0 ; j < childNum; j++)
			{
				if (s[i] == item->child(j)->data(0, 0)) 
					reNewTreeNode(newItem, item->child(j));
			}
			if (i == 0) t1 = depth;
		}
	}
	level--;
	if (findItem(index) < list.size() && findItem(index) >= 0 )
	{
		{
			QGraphicsItem *temp = list.at(findItem(index));
			((QGraphicsTextItem*)temp)->setFont(scene.font());
			if(temp->childItems().size()>0)
				scene.removeItem(temp->childItems().at(0));
			penText[level % 5].setWidth(backWidth);
			QGraphicsRectItem *back = scene.addRect(-10, -2, 60, 24, penText[level % 5], brush[level % 5]);
			back->setParentItem(temp);
			back->setFlags(QGraphicsItem::ItemIsSelectable);
			back->setFlags(back->flags() | QGraphicsItem::ItemStacksBehindParent);
			list.at(findItem(index))->setPos(level * length , (depth + t - 1) * height / 2);

		}
		{
			penText[level % 5].setWidth(lineWidth);

			if (level != 0) {
				penText[(level - 1) % 5].setWidth(lineWidth);
				QGraphicsLineItem *line1 = scene.addLine(level * length - 20,
					(depth + t - 1) * height / 2 + 10, level * length-10, (depth + t - 1) * height / 2 + 10, penText[(level -1)% 5]);
				line1->setParentItem(LineHead);
			}

			QGraphicsLineItem *line2 = scene.addLine(level * length + 50,
				(depth + t - 1) * height / 2 + 10, level * length + 80, (depth + t - 1) * height / 2 + 10, penText[level % 5]);
			line2->setParentItem(LineHead);


			QGraphicsLineItem *line3 = scene.addLine(level * length + 80, (t + t1 - 1) * height / 2 + 10,
				level * length + 80, (depth + t2 - 1) * height / 2 + 10, penText[level % 5]);
			line3->setParentItem(LineHead);
		}
	}
	index++;

	return;

}

/*删除结点-图*/
void MindNote::deleteTree(QTreeWidgetItem* item, int deleteIndex)
{

	if (NULL == item) return;
	int t = depth;
	int childNum = item->childCount();

	if (item->data(0, 0).toInt() == deleteIndex)
	{
		flag = 1;
	}

	if (0 == childNum)
	{
		if (findItem(index) < list.size() && findItem(index) >= 0)
		{
			if (1 == flag&& item->data(0, 0).toInt() <= deleteIndex)
			{
				scene.removeItem(list.at(findItem(index)));
				count++;
			}
			else
			{
				//list.at(findItem(index))->setPos(level * length, depth * height);
				//depth++;

			}
			//if (item->data(0, 0).toInt() == deleteIndex) flag = 0;
		}
		index++;
		return;
	}
	level++;
	{
		int s[50];
		if (childNum > 50) return;
		for (int i = 0; i < childNum; i++)
		{
			s[i] = item->child(i)->data(0, 0).toInt();
		}
		qsort(s, childNum, sizeof(s[0]), cmp);
		for (int i = 0; i < childNum; i++)
		{
			int j;
			for (j = 0; j < childNum; j++)
			{
				if (s[i] == item->child(j)->data(0, 0))
					deleteTree(item->child(i), deleteIndex);
			}
		}
	}
	level--;
	//if (item->data(0, 0).toInt() > deleteIndex) flag = 0;
	if (findItem(index) < list.size() && findItem(index) >= 0)
	{
		if (1 == flag&& item->data(0, 0).toInt() <= deleteIndex)
		{
			scene.removeItem(list.at(findItem(index)));
			count++;
		}
		else
		{
			//list.at(findItem(index))->setPos(level * length, (depth + t - 1) * height / 2);
		}
		//if (item->data(0, 0).toInt() == deleteIndex) flag = 0;
	}

	index++;
	return;
}

/*查找text*/
int MindNote::findItem(int IntData)
{
	int i;
	for (i = 0; i < list.size(); i++)
	{
		if (list.at(i)->data(0) == IntData)
		{
			return i;
		}
	}
	return -1;
}

/*删除所有线*/
void MindNote::deleteLine(void) 
{
	QList<QGraphicsItem *> temp = LineHead->childItems();

	for (int i = 0; i < temp.size(); i++)
	{
		scene.removeItem(temp.at(i));
	}
}