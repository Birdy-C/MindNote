#ifndef PARAMETER_H
#define PARAMETER_H

#include <QWidget>
#include "ui_mindnote.h"

namespace Ui_parameter {
class parameter;
}

class parameter : public QWidget
{
    Q_OBJECT

public:
    explicit parameter(QWidget *parent = 0);
    ~parameter();

private slots:
    void on_NodeShape_1_toggled(bool checked);
    void on_NodeShape_2_toggled(bool checked);
    void on_NodeShape_3_toggled(bool checked);
    void on_NodeShape_4_toggled(bool checked);
    void on_NodeShape_5_toggled(bool checked);

    void on_FrameWidth_Check_toggled(bool checked);
    void on_FrameWidth_Number_editingFinished();
    void on_FrameWidth_Number_valueChanged(double arg1);

    void on_NodeFrame_1_toggled(bool checked);
    void on_NodeFrame_2_toggled(bool checked);
    void on_NodeFrame_3_toggled(bool checked);
    void on_NodeFrame_4_toggled(bool checked);
    void on_NodeFrame_5_toggled(bool checked);

    void on_FrameDegree_spinBox_valueChanged(int arg1);

    void on_LineShape_1_toggled(bool checked);
    void on_LineShape_2_toggled(bool checked);
    void on_LineShape_3_toggled(bool checked);
    void on_LineShape_4_toggled(bool checked);
    void on_LineShape_5_toggled(bool checked);
    void on_LineDegree_spinBox_valueChanged(int arg1);

    void on_fontComboBox_activated(const QString &arg1);

    void on_Font_spinBox_valueChanged(int arg1);

private:
	Ui::MainWindow ui;
};

#endif // PARAMETER_H
