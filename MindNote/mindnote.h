#ifndef MINDNOTE_H
#define MINDNOTE_H

#include <algorithm>
#include <QPen>
#include <QBrush>
#include <QtWidgets/QMainWindow>
#include <QGraphicsItem>
#include <QGraphicsTextItem>
#include <QGraphicsScene>
#include <QtDebug>
#include <QList>
#include <QFontComboBox>
#include <QCursor>
#include <QMessageBox>

#include "ui_mindnote.h"


class MindNote : public QMainWindow
{
	Q_OBJECT

public:
	MindNote(QWidget *parent = 0);
	~MindNote();


	void createTree();
	void createAction();
	//void createButton();

	void reNewTreeNode(QVariant newItem, QTreeWidgetItem* item);
	void deleteTree(QTreeWidgetItem* item,int deleteIndex);
	int findItem(int IntData);
	void Select(QTreeWidgetItem* item, QVariant data);
	void resetIndex(const int);
	void resetTreeIndex(QTreeWidgetItem* item,const int);
	void deleteLine(void);
	void reset(void);
	void setColor(int, int);


public slots:
	void deleteNode();
	void newChildNode();
	void reNewTree(QVariant item);
	void WidgetSelect(void);
	
	void bt_line_1_click(void);
	void bt_line_2_click(void);
	void bt_line_3_click(void);
	void bt_line_4_click(void);
	void bt_line_5_click(void);

	void bt_back_1_click(void);
	void bt_back_2_click(void);
	void bt_back_3_click(void);
	void bt_back_4_click(void);
	void bt_back_5_click(void);

	void bt_theme_1_click(void);
	void bt_theme_2_click(void);
	void bt_theme_3_click(void);
	void bt_theme_4_click(void);
	void bt_theme_5_click(void);

	void bt_LineShape_1_click(void);
	void bt_LineShape_2_click(void);
	void bt_LineShape_3_click(void);
	void bt_LineShape_4_click(void);
	void bt_LineShape_5_click(void);
	
	void back_width_change(int);
	void line_width_change(int);
	void font_change(QFont select);
	void actionAbout_checked();
	void actionHelp_checked();
	void actionsetting_checked(bool);

	//void changeData(QVariant data);
private:
	Ui::MainWindow ui;

	QGraphicsScene scene;// 
	QGraphicsTextItem* GraphicsHead;
	QGraphicsTextItem* LineHead;

	QList<QGraphicsItem *> list;

	QPen penText[5];
	QBrush brush[5];
	//QFont font;

	int lineWidth;
	int backWidth;
	int length;//delta x
	int height;//delta y
	QGraphicsTextItem* tempText;
	//QTreeWidgetItem* tempTree;
	int depth;//y
	int level;//x
	int index;
	int width;//×Ö·û³¤¶È

	int flag;
	int temp;
	int count;// the num that deleted
};

#endif // MINDNOTE_H
