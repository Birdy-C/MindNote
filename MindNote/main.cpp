#include "mindnote.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MindNote w;
	w.show();
	return a.exec();
}
