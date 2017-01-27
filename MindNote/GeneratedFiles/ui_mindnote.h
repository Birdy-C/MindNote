/********************************************************************************
** Form generated from reading UI file 'mindnote.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINDNOTE_H
#define UI_MINDNOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionNewChildNode;
    QAction *actionDeleteNode;
    QAction *actionReNew;
    QAction *action_3;
    QAction *actionShowText;
    QAction *actionShowTree;
    QAction *actionAbout;
    QAction *actionHelp;
    QAction *actionSetting;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QGraphicsView *graphicsView;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *Node;
    QGroupBox *g_back;
    QRadioButton *bt_back_5;
    QRadioButton *bt_back_1;
    QRadioButton *bt_back_4;
    QRadioButton *bt_back_2;
    QRadioButton *bt_back_3;
    QGroupBox *groupBox;
    QRadioButton *bt_line_5;
    QRadioButton *bt_line_1;
    QRadioButton *bt_line_3;
    QRadioButton *bt_line_2;
    QRadioButton *bt_line_4;
    QSpinBox *BackDegree;
    QLabel *FrameDegree_Label;
    QGroupBox *Line;
    QGroupBox *LineShape;
    QRadioButton *bt_LineShape_5;
    QRadioButton *bt_LineShape_1;
    QRadioButton *bt_LineShape_3;
    QRadioButton *bt_LineShape_2;
    QRadioButton *bt_LineShape_4;
    QLabel *LineDegree;
    QSpinBox *LineDegree_2;
    QGroupBox *Font;
    QFontComboBox *fontComboBox;
    QGroupBox *NodeShape_6;
    QRadioButton *bt_theme_5;
    QRadioButton *bt_theme_1;
    QRadioButton *bt_theme_3;
    QRadioButton *bt_theme_2;
    QRadioButton *bt_theme_4;
    QWidget *tab_2;
    QGroupBox *annotation;
    QTextEdit *annotationText;
    QTreeWidget *treeWidget;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QMenu *menu_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1074, 594);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(false);
        MainWindow->setFont(font);
        MainWindow->setAnimated(false);
        MainWindow->setDocumentMode(false);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionNewChildNode = new QAction(MainWindow);
        actionNewChildNode->setObjectName(QStringLiteral("actionNewChildNode"));
        actionDeleteNode = new QAction(MainWindow);
        actionDeleteNode->setObjectName(QStringLiteral("actionDeleteNode"));
        actionReNew = new QAction(MainWindow);
        actionReNew->setObjectName(QStringLiteral("actionReNew"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        actionShowText = new QAction(MainWindow);
        actionShowText->setObjectName(QStringLiteral("actionShowText"));
        actionShowText->setCheckable(true);
        actionShowText->setChecked(true);
        actionShowTree = new QAction(MainWindow);
        actionShowTree->setObjectName(QStringLiteral("actionShowTree"));
        actionShowTree->setCheckable(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionSetting = new QAction(MainWindow);
        actionSetting->setObjectName(QStringLiteral("actionSetting"));
        actionSetting->setCheckable(true);
        actionSetting->setChecked(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer_3 = new QSpacerItem(10, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        horizontalLayout->addWidget(graphicsView);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(218, 0));
        tabWidget->setMaximumSize(QSize(218, 511));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        Node = new QGroupBox(tab);
        Node->setObjectName(QStringLiteral("Node"));
        Node->setGeometry(QRect(0, 80, 211, 161));
        g_back = new QGroupBox(Node);
        g_back->setObjectName(QStringLiteral("g_back"));
        g_back->setGeometry(QRect(10, 20, 161, 51));
        bt_back_5 = new QRadioButton(g_back);
        bt_back_5->setObjectName(QStringLiteral("bt_back_5"));
        bt_back_5->setGeometry(QRect(130, 20, 21, 20));
        bt_back_1 = new QRadioButton(g_back);
        bt_back_1->setObjectName(QStringLiteral("bt_back_1"));
        bt_back_1->setGeometry(QRect(10, 20, 21, 20));
        bt_back_1->setAcceptDrops(false);
        bt_back_1->setChecked(true);
        bt_back_4 = new QRadioButton(g_back);
        bt_back_4->setObjectName(QStringLiteral("bt_back_4"));
        bt_back_4->setGeometry(QRect(70, 20, 21, 20));
        bt_back_2 = new QRadioButton(g_back);
        bt_back_2->setObjectName(QStringLiteral("bt_back_2"));
        bt_back_2->setGeometry(QRect(40, 20, 21, 20));
        bt_back_3 = new QRadioButton(g_back);
        bt_back_3->setObjectName(QStringLiteral("bt_back_3"));
        bt_back_3->setGeometry(QRect(100, 20, 21, 20));
        groupBox = new QGroupBox(Node);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 70, 161, 81));
        bt_line_5 = new QRadioButton(groupBox);
        bt_line_5->setObjectName(QStringLiteral("bt_line_5"));
        bt_line_5->setGeometry(QRect(130, 20, 21, 20));
        bt_line_1 = new QRadioButton(groupBox);
        bt_line_1->setObjectName(QStringLiteral("bt_line_1"));
        bt_line_1->setGeometry(QRect(10, 20, 21, 20));
        bt_line_1->setAcceptDrops(false);
        bt_line_1->setAutoFillBackground(false);
        bt_line_1->setChecked(true);
        bt_line_3 = new QRadioButton(groupBox);
        bt_line_3->setObjectName(QStringLiteral("bt_line_3"));
        bt_line_3->setGeometry(QRect(70, 20, 21, 20));
        bt_line_2 = new QRadioButton(groupBox);
        bt_line_2->setObjectName(QStringLiteral("bt_line_2"));
        bt_line_2->setGeometry(QRect(40, 20, 21, 20));
        bt_line_4 = new QRadioButton(groupBox);
        bt_line_4->setObjectName(QStringLiteral("bt_line_4"));
        bt_line_4->setGeometry(QRect(100, 20, 21, 20));
        BackDegree = new QSpinBox(groupBox);
        BackDegree->setObjectName(QStringLiteral("BackDegree"));
        BackDegree->setGeometry(QRect(90, 50, 48, 24));
        BackDegree->setMinimum(1);
        BackDegree->setMaximum(6);
        FrameDegree_Label = new QLabel(groupBox);
        FrameDegree_Label->setObjectName(QStringLiteral("FrameDegree_Label"));
        FrameDegree_Label->setGeometry(QRect(20, 50, 60, 16));
        Line = new QGroupBox(tab);
        Line->setObjectName(QStringLiteral("Line"));
        Line->setGeometry(QRect(0, 260, 211, 121));
        LineShape = new QGroupBox(Line);
        LineShape->setObjectName(QStringLiteral("LineShape"));
        LineShape->setGeometry(QRect(20, 20, 161, 51));
        bt_LineShape_5 = new QRadioButton(LineShape);
        bt_LineShape_5->setObjectName(QStringLiteral("bt_LineShape_5"));
        bt_LineShape_5->setGeometry(QRect(130, 20, 21, 20));
        bt_LineShape_1 = new QRadioButton(LineShape);
        bt_LineShape_1->setObjectName(QStringLiteral("bt_LineShape_1"));
        bt_LineShape_1->setGeometry(QRect(10, 20, 21, 20));
        bt_LineShape_1->setChecked(true);
        bt_LineShape_3 = new QRadioButton(LineShape);
        bt_LineShape_3->setObjectName(QStringLiteral("bt_LineShape_3"));
        bt_LineShape_3->setGeometry(QRect(70, 20, 21, 20));
        bt_LineShape_2 = new QRadioButton(LineShape);
        bt_LineShape_2->setObjectName(QStringLiteral("bt_LineShape_2"));
        bt_LineShape_2->setGeometry(QRect(40, 20, 21, 20));
        bt_LineShape_4 = new QRadioButton(LineShape);
        bt_LineShape_4->setObjectName(QStringLiteral("bt_LineShape_4"));
        bt_LineShape_4->setGeometry(QRect(100, 20, 21, 20));
        LineDegree = new QLabel(Line);
        LineDegree->setObjectName(QStringLiteral("LineDegree"));
        LineDegree->setGeometry(QRect(30, 80, 60, 16));
        LineDegree_2 = new QSpinBox(Line);
        LineDegree_2->setObjectName(QStringLiteral("LineDegree_2"));
        LineDegree_2->setGeometry(QRect(100, 80, 48, 24));
        LineDegree_2->setMinimum(1);
        LineDegree_2->setMaximum(3);
        Font = new QGroupBox(tab);
        Font->setObjectName(QStringLiteral("Font"));
        Font->setGeometry(QRect(0, 390, 211, 61));
        fontComboBox = new QFontComboBox(Font);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setGeometry(QRect(0, 20, 201, 28));
        NodeShape_6 = new QGroupBox(tab);
        NodeShape_6->setObjectName(QStringLiteral("NodeShape_6"));
        NodeShape_6->setGeometry(QRect(0, 10, 211, 51));
        bt_theme_5 = new QRadioButton(NodeShape_6);
        bt_theme_5->setObjectName(QStringLiteral("bt_theme_5"));
        bt_theme_5->setGeometry(QRect(140, 20, 21, 20));
        bt_theme_1 = new QRadioButton(NodeShape_6);
        bt_theme_1->setObjectName(QStringLiteral("bt_theme_1"));
        bt_theme_1->setGeometry(QRect(20, 20, 21, 20));
        bt_theme_1->setAcceptDrops(false);
        bt_theme_1->setChecked(true);
        bt_theme_3 = new QRadioButton(NodeShape_6);
        bt_theme_3->setObjectName(QStringLiteral("bt_theme_3"));
        bt_theme_3->setGeometry(QRect(80, 20, 21, 20));
        bt_theme_2 = new QRadioButton(NodeShape_6);
        bt_theme_2->setObjectName(QStringLiteral("bt_theme_2"));
        bt_theme_2->setGeometry(QRect(50, 20, 21, 20));
        bt_theme_4 = new QRadioButton(NodeShape_6);
        bt_theme_4->setObjectName(QStringLiteral("bt_theme_4"));
        bt_theme_4->setGeometry(QRect(110, 20, 21, 20));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        annotation = new QGroupBox(tab_2);
        annotation->setObjectName(QStringLiteral("annotation"));
        annotation->setGeometry(QRect(0, 10, 211, 191));
        annotationText = new QTextEdit(annotation);
        annotationText->setObjectName(QStringLiteral("annotationText"));
        annotationText->setGeometry(QRect(10, 30, 191, 151));
        treeWidget = new QTreeWidget(tab_2);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(20, 230, 191, 211));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1074, 23));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        QFont font1;
        font1.setKerning(false);
        menu_3->setFont(font1);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_3->menuAction());
        menu_3->addSeparator();
        menu_3->addAction(actionNewChildNode);
        menu_3->addAction(actionDeleteNode);
        menu_3->addSeparator();
        menu_3->addAction(actionSetting);
        menu_3->addSeparator();
        menu_3->addAction(actionHelp);
        menu_3->addAction(actionAbout);
        menu_3->addSeparator();

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionCut->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207", 0));
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0));
        actionCopy->setText(QApplication::translate("MainWindow", "\346\213\267\350\264\235", 0));
#ifndef QT_NO_TOOLTIP
        actionCopy->setToolTip(QApplication::translate("MainWindow", "\346\213\267\350\264\235", 0));
#endif // QT_NO_TOOLTIP
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0));
        actionPaste->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264", 0));
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0));
        actionNewChildNode->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\345\255\220\350\212\202\347\202\271", 0));
        actionNewChildNode->setShortcut(QApplication::translate("MainWindow", "Shift+Return", 0));
        actionDeleteNode->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\347\273\223\347\202\271", 0));
        actionDeleteNode->setShortcut(QApplication::translate("MainWindow", "Del", 0));
        actionReNew->setText(QApplication::translate("MainWindow", "reNew", 0));
        actionReNew->setShortcut(QApplication::translate("MainWindow", "Return", 0));
        action_3->setText(QApplication::translate("MainWindow", "About", 0));
        actionShowText->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256", 0));
        actionShowTree->setText(QApplication::translate("MainWindow", "\346\240\221\347\212\266\345\233\276", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", 0));
        actionHelp->setShortcut(QApplication::translate("MainWindow", "H", 0));
        actionSetting->setText(QApplication::translate("MainWindow", "\347\225\214\351\235\242\350\256\276\347\275\256", 0));
        Node->setTitle(QApplication::translate("MainWindow", "\351\242\234\350\211\262", 0));
        g_back->setTitle(QApplication::translate("MainWindow", "\350\203\214\346\231\257", 0));
        bt_back_5->setText(QString());
        bt_back_1->setText(QString());
        bt_back_4->setText(QString());
        bt_back_2->setText(QString());
        bt_back_3->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "\350\276\271\346\241\206\347\272\277", 0));
        bt_line_5->setText(QString());
        bt_line_1->setText(QString());
        bt_line_3->setText(QString());
        bt_line_2->setText(QString());
        bt_line_4->setText(QString());
        FrameDegree_Label->setText(QApplication::translate("MainWindow", "\350\276\271\346\241\206\347\262\227\347\273\206", 0));
        Line->setTitle(QApplication::translate("MainWindow", "\350\277\236\347\272\277", 0));
        LineShape->setTitle(QApplication::translate("MainWindow", "\347\272\277\345\236\213", 0));
        bt_LineShape_5->setText(QString());
        bt_LineShape_1->setText(QString());
        bt_LineShape_3->setText(QString());
        bt_LineShape_2->setText(QString());
        bt_LineShape_4->setText(QString());
        LineDegree->setText(QApplication::translate("MainWindow", "\350\277\236\347\272\277\347\262\227\347\273\206", 0));
        Font->setTitle(QApplication::translate("MainWindow", "\345\255\227\344\275\223", 0));
        NodeShape_6->setTitle(QApplication::translate("MainWindow", "\344\270\273\351\242\230", 0));
#ifndef QT_NO_TOOLTIP
        bt_theme_5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>gay\347\264\253</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        bt_theme_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        bt_theme_1->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\350\220\244\346\243\256</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        bt_theme_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        bt_theme_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\346\260\264\350\223\235</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        bt_theme_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        bt_theme_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\350\265\244\347\204\260</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        bt_theme_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        bt_theme_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\346\232\227\351\207\221</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        bt_theme_4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\237\272\346\234\254\350\256\276\347\275\256", 0));
        annotation->setTitle(QApplication::translate("MainWindow", "\346\263\250\351\207\212", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "MindNote", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\346\263\250\351\207\212", 0));
        menu_3->setTitle(QApplication::translate("MainWindow", "MindNote", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINDNOTE_H
