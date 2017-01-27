#include "mindnote.h"
#include "treeNode.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication theapp(argc, argv);
	MindNote w;
	w.show();
	return theapp.exec();
}
