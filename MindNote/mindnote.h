#ifndef MINDNOTE_H
#define MINDNOTE_H

#include <QtWidgets/QMainWindow>
#include "ui_mindnote.h"

class MindNote : public QMainWindow
{
	Q_OBJECT

public:
	MindNote(QWidget *parent = 0);
	~MindNote();

private:
	Ui::MindNoteClass ui;
};

#endif // MINDNOTE_H
