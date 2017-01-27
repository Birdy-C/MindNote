#include "mindnote.h"

MindNote::MindNote(QWidget *parent)
	: QMainWindow(parent),length(100),height(50), lineWidth(1),backWidth(1)
{

	//font = QFont();
	ui.setupUi(this);

	GraphicsHead = scene.addText("");
	LineHead = scene.addText("");

	setColor(1,1);
	for (int i = 0; i < 5; i++)
	{
		penText[i].setStyle(Qt::SolidLine);
		penText[i].setCapStyle(Qt::RoundCap);
		brush[i].setStyle(Qt::SolidPattern);
		penText[i].setWidth(lineWidth);
	}

	//createButton();
	createTree();
	createAction();

	ui.graphicsView->setScene(&scene);
}


MindNote::~MindNote()
{
	delete GraphicsHead;
}


void MindNote::createAction()
{
	QObject::connect(ui.actionDeleteNode, SIGNAL(triggered()), this, SLOT(deleteNode()));
	QObject::connect(ui.actionNewChildNode, SIGNAL(triggered()), this, SLOT(newChildNode()));

	QObject::connect(ui.actionAbout, SIGNAL(triggered()), this, SLOT(actionAbout_checked()));
	QObject::connect(ui.actionHelp, SIGNAL(triggered()), this, SLOT(actionHelp_checked()));
	QObject::connect(ui.actionSetting, SIGNAL(triggered(bool)), this, SLOT(actionsetting_checked(bool)));

	QObject::connect( &scene, SIGNAL(selectionChanged()), this, SLOT(WidgetSelect()));

	QObject::connect(ui.bt_line_1, SIGNAL(clicked(bool)), this, SLOT(bt_line_1_click()));
	QObject::connect(ui.bt_line_2, SIGNAL(clicked(bool)), this, SLOT(bt_line_2_click()));
	QObject::connect(ui.bt_line_3, SIGNAL(clicked(bool)), this, SLOT(bt_line_3_click()));
	QObject::connect(ui.bt_line_4, SIGNAL(clicked(bool)), this, SLOT(bt_line_4_click()));
	QObject::connect(ui.bt_line_5, SIGNAL(clicked(bool)), this, SLOT(bt_line_5_click()));

	QObject::connect(ui.bt_back_1, SIGNAL(clicked(bool)), this, SLOT(bt_back_1_click()));
	QObject::connect(ui.bt_back_2, SIGNAL(clicked(bool)), this, SLOT(bt_back_2_click()));
	QObject::connect(ui.bt_back_3, SIGNAL(clicked(bool)), this, SLOT(bt_back_3_click()));
	QObject::connect(ui.bt_back_4, SIGNAL(clicked(bool)), this, SLOT(bt_back_4_click()));
	QObject::connect(ui.bt_back_5, SIGNAL(clicked(bool)), this, SLOT(bt_back_5_click()));

	QObject::connect(ui.bt_theme_1, SIGNAL(clicked(bool)), this, SLOT(bt_theme_1_click()));
	QObject::connect(ui.bt_theme_2, SIGNAL(clicked(bool)), this, SLOT(bt_theme_2_click()));
	QObject::connect(ui.bt_theme_3, SIGNAL(clicked(bool)), this, SLOT(bt_theme_3_click()));
	QObject::connect(ui.bt_theme_4, SIGNAL(clicked(bool)), this, SLOT(bt_theme_4_click()));
	QObject::connect(ui.bt_theme_5, SIGNAL(clicked(bool)), this, SLOT(bt_theme_5_click()));

	QObject::connect(ui.bt_LineShape_1, SIGNAL(clicked(bool)), this, SLOT(bt_LineShape_1_click()));
	QObject::connect(ui.bt_LineShape_2, SIGNAL(clicked(bool)), this, SLOT(bt_LineShape_2_click()));
	QObject::connect(ui.bt_LineShape_3, SIGNAL(clicked(bool)), this, SLOT(bt_LineShape_3_click()));
	QObject::connect(ui.bt_LineShape_4, SIGNAL(clicked(bool)), this, SLOT(bt_LineShape_4_click()));
	QObject::connect(ui.bt_LineShape_5, SIGNAL(clicked(bool)), this, SLOT(bt_LineShape_5_click()));


	QObject::connect(ui.LineDegree_2, SIGNAL(valueChanged(int)), this, SLOT(line_width_change(int)));
	QObject::connect(ui.BackDegree, SIGNAL(valueChanged(int)), this, SLOT(back_width_change(int)));
	QObject::connect(ui.fontComboBox, SIGNAL(currentFontChanged(QFont)), this, SLOT(font_change(QFont)));


    //QObject::connect(ui.actionCopy, SIGNAL(triggered()), text, SLOT(copy()));
 // QObject::connect(ui.actionReNew, SIGNAL(), this, SLOT(repaintTree()));

}

