#include "mindnote.h"

/*重新绘图*/
void MindNote::reset(void)
{
	deleteLine();
	depth = 0;
	level = 0;
	flag = 1;
	index = 0;
	list = GraphicsHead->childItems();
	reNewTreeNode(-10, ui.treeWidget->topLevelItem(0));

}

/*节点宽度调整*/
void MindNote::back_width_change(int width) 
{
	backWidth = width;
	reset();
}

/*线宽调整*/
void MindNote::line_width_change(int width) 
{
	lineWidth = width;
	reset();
}

/*字体调整*/
void MindNote::font_change(QFont select) 
{
	scene.setFont(select);
	reset();
}

/*About 主菜单*/
void MindNote::actionAbout_checked() 
{
QMessageBox box;
box.setFixedSize(160, 72);
box.setWindowTitle(tr("About"));
box.setText(tr( "@author\n\t Birdy. \n\t Sunn. \n\t Gilyne.  \t  \n\t Chison. \n\t  YI. \n   " ) );

box.setStandardButtons(QMessageBox::Ok);

box.exec();

}


/*help 主菜单*/
void MindNote::actionHelp_checked()
{
	QMessageBox box;
	box.setWindowTitle(tr("Help"));
	box.setText("Do you need any help?   ");
	box.setStandardButtons(QMessageBox::Yes|QMessageBox::No);

	if (box.exec() == QMessageBox::Yes)
	{
		QMessageBox msgbox;
		msgbox.setWindowTitle(tr("Help"));
		msgbox.setText("Click More ~   ");
		msgbox.setStandardButtons(QMessageBox::Ok);
		msgbox.exec();
	}

}

/*设置主菜单*/
void MindNote::actionsetting_checked(bool check) 
{

	ui.tabWidget->setVisible(check);

}

/*设置颜色*/
void MindNote::setColor(int line, int back)
{
	switch (line)
	{
	case 1:
		for (int i = 0; i < 5; i++)
		{
			QColor G(126 + 20 * i, 211, 33 + 20 * i);
			penText[i].setColor(G);
		}
		break;
	case 2:
		for (int i = 0; i < 5; i++)
		{
			QColor G(217, 49 + 20 * i, 49 + 20 * i);
			penText[i].setColor(G);
		}
		break;
	case 3:
		for (int i = 0; i < 5; i++)
		{
			QColor G(74 + 20 * i, 144 + 20 * i, 226);
			penText[i].setColor(G);
		}
		break;
	case 4:
		for (int i = 0; i < 5; i++)
		{
			QColor G(104, 191, 29 + 30 * i);
			penText[i].setColor(G);
		}
		break;
	case 5:
		for (int i = 0; i < 5; i++)
		{
			QColor G(131 + 20 * i, 91 + 20 * i, 171);
			penText[i].setColor(G);
		}
		break;

	default:;
	}

	switch (back)
	{
	case 1:
		//green R yue jie
		for (int i = 0; i < 4; i++)
		{
			QColor G(184 + 20 * i, 233, 134 + 20 * i);
			brush[i].setColor(G);
		}
		{
			QColor G(255, 233, 154);
			brush[4].setColor(G);
		}
		break;
	case 2:
		for (int i = 0; i < 5; i++)
		{
			QColor G(249, 122 + 20 * i, 138 + 20 * i);
			brush[i].setColor(G);
		}
		break;
	case 3:
		for (int i = 0; i < 5; i++)
		{
			QColor G(124 + 20 * i, 155 + 20 * i, 237);
			brush[i].setColor(G);
		}
		break;
	case 4:
		for (int i = 0; i < 5; i++)
		{
			QColor G(245, 237, 136 + 20 * i);
			brush[i].setColor(G);
		}
		break;
	case 5:
		for (int i = 0; i < 5; i++)
		{
			QColor G(194 + 10 * i, 158 + 20 * i, 218);
			brush[i].setColor(G);
		}
		break;
	default:;
	}
	reset();
}

/*颜色相关 槽*/
void MindNote::bt_line_1_click()
{
	setColor(1, 0);
}

void MindNote::bt_line_2_click()
{
	setColor(2, 0);
}

void MindNote::bt_line_3_click()
{
	setColor(3, 0);
}

void MindNote::bt_line_4_click()
{
	setColor(4, 0);
}

void MindNote::bt_line_5_click()
{
	setColor(5, 0);
}


void MindNote::bt_back_1_click()
{
	setColor(0, 1);
}

void MindNote::bt_back_2_click()
{
	setColor(0, 2);
}

void MindNote::bt_back_3_click()
{
	setColor(0, 3);
}

void MindNote::bt_back_4_click()
{
	setColor(0, 4);
}

void MindNote::bt_back_5_click()
{
	setColor(0, 5);
}



void MindNote::bt_theme_1_click()
{
	setColor(1, 1);
	ui.bt_back_1->setChecked(true);
	ui.bt_line_1->setChecked(true);
}

void MindNote::bt_theme_2_click()
{
	setColor(2, 2);
	ui.bt_back_2->setChecked(true);
	ui.bt_line_2->setChecked(true);
}

void MindNote::bt_theme_3_click()
{
	setColor(3, 3);
	ui.bt_back_4->setChecked(true);
	ui.bt_line_3->setChecked(true);
}

void MindNote::bt_theme_4_click()
{
	setColor(4, 4);
	ui.bt_back_3->setChecked(true);
	ui.bt_line_4->setChecked(true);
}

void MindNote::bt_theme_5_click()
{
	setColor(5, 5);
	ui.bt_back_5->setChecked(true);
	ui.bt_line_5->setChecked(true);
}

void MindNote::bt_LineShape_1_click()
{
	for (int i = 0; i < 5; i++)
	{
		penText[i].setStyle(Qt::SolidLine);
	}
	reset();
}

void MindNote::bt_LineShape_2_click()
{
	for (int i = 0; i < 5; i++)
	{
		penText[i].setStyle(Qt::DashLine);
	}
	reset();

}

void MindNote::bt_LineShape_3_click()
{
	for (int i = 0; i < 5; i++)
	{
		penText[i].setStyle(Qt::DotLine);
	}
	reset();

}

void MindNote::bt_LineShape_4_click()
{
	for (int i = 0; i < 5; i++)
	{
		penText[i].setStyle(Qt::DashDotLine);
	}
	reset();
}

void MindNote::bt_LineShape_5_click()
{
	for (int i = 0; i < 5; i++)
	{
		penText[i].setStyle(Qt::DashDotDotLine);
	}
	reset();

}

