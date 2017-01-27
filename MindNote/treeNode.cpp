#include "mindnote.h"

/*初始化生成树*/
void MindNote::createTree()
{
	QString str;
	ui.treeWidget->setColumnCount(1);
	QTreeWidgetItem *Item1 = new QTreeWidgetItem(ui.treeWidget);
	//Item1->setFlags(Item1->flags() | Qt::ItemIsEditable);
	Item1->setText(0, "theme");
	Item1->setData(0, 0, 0);
	ui.treeWidget->setCurrentItem(Item1);

	QGraphicsTextItem *text = scene.addText("theme");
	text->setTextInteractionFlags(Qt::TextEditable);
	text->setParentItem(GraphicsHead);
	text->setPos(0, 0);
	text->setData(0, 0);
	QGraphicsRectItem *back = scene.addRect(-5, -2, 50, 24, penText[level % 5], brush[level % 5]);
	back->setParentItem(text);
	back->setSelected(true);
	//text->setTextWidth(40);

	back->setFlags(QGraphicsItem::ItemIsSelectable);
	back->setFlags(back->flags() | QGraphicsItem::ItemStacksBehindParent);

	//list = GraphicsHead->childItems();
	ui.treeWidget->setVisible(false);
}

/*删除某一结点*/
void MindNote::deleteNode()
{
	QTreeWidgetItem* item = ui.treeWidget->currentItem();//获得当前节点
	if (item->parent() == NULL) return;
	deleteLine();
	flag = 0;
	index = 0;
	count = 0;
	index = 0;
	depth = 0;
	level = 0;
	temp = item->data(0, 0).toInt();
	deleteTree(ui.treeWidget->topLevelItem(0),temp);
	resetIndex(-count);

	list = GraphicsHead->childItems();
	delete item;

	/*更新图*/
	reset();
}

/*添加结点*/
void MindNote::newChildNode()
{
	QTreeWidgetItem* item = ui.treeWidget->currentItem();//获得当前节点
	if (NULL == item) return;
	QTreeWidgetItem* temp = new QTreeWidgetItem(item);
	item->addChild(temp);
    temp->setText( 0 , "MindNote");
	temp->setFlags(temp->flags() | Qt::ItemIsEditable);
	int t = item->data(0, 0).toInt();
	temp->setData(0, 0, t);
	reNewTree(item->data(0, 0));
	temp->setData(0, 0, t);
};


/*选择区域*/
void MindNote::WidgetSelect()
{
	index = 0;

	QList<QGraphicsItem *>list = scene.selectedItems();
	if (list.isEmpty()) return;
	QVariant data;
	data= list.at(0)->parentItem()->data(0);
	Select(ui.treeWidget->topLevelItem(0), data);

}

/*选择对应节点*/
void MindNote::Select(QTreeWidgetItem* item, QVariant data)
{
	if (data < index) return;
	int childNum = item->childCount();

	for (int i = 0; i < childNum; i++)
	{
		Select(item->child(i), data);
	}
	if (data == item->data(0,0))
	{
		ui.treeWidget->setCurrentItem(item);
		index++;
	}
	index++;

}

