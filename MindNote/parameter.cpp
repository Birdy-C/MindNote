#include "mindnote.h"

parameter::parameter(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::parameter)
{
	ui->setupUi(this);

	this->setWindowTitle("参数设置");

}

//手动宽度
void MindNote::on_FrameWidth_Check_toggled(bool checked)
{
	if (checked) {
		qDebug() << tr("手动宽度开启");
	}
	else qDebug() << tr("手动宽度关闭");
}

void parameter::on_FrameWidth_Number_editingFinished()
{
	qDebug() << ui->FrameWidth_Number->value();
}

void parameter::on_FrameWidth_Number_valueChanged(double arg1)
{
	qDebug() << arg1;
}

//边框形状
void parameter::on_NodeShape_1_toggled(bool checked)
{
	if (checked) {
		qDebug() << tr("选择边框形状I");
	}
	else;
}

void parameter::on_NodeShape_2_toggled(bool checked)
{
	if (checked) {
		qDebug() << tr("选择边框形状II");
	}
	else;
}

void parameter::on_NodeShape_3_toggled(bool checked)
{
	if (checked) {
		qDebug() << tr("选择边框形状III");
	}
	else;
}

void parameter::on_NodeShape_4_toggled(bool checked)
{
	if (checked) {
		qDebug() << tr("选择边框形状IV");
	}
	else;
}

void parameter::on_NodeShape_5_toggled(bool checked)
{
	if (checked) {
		qDebug() << tr("选择边框形状V");
	}
	else;
}

//边框线型
void parameter::on_NodeFrame_1_toggled(bool checked)
{
	if (checked) {
		qDebug() << tr("边框线型I");
	}
}

void parameter::on_NodeFrame_2_toggled(bool checked)
{
	if (checked) {
		qDebug() << tr("边框线型II");
	}
}

void parameter::on_NodeFrame_3_toggled(bool checked)
{
	if (checked) {
		qDebug() << tr("边框线型III");
	}
}

void parameter::on_NodeFrame_4_toggled(bool checked)
{
	if (checked) {
		qDebug() << tr("边框线型IV");
	}
}

void parameter::on_NodeFrame_5_toggled(bool checked)
{
	if (checked) {
		qDebug() << tr("边框线型V");
	}
}

//边框粗细
void parameter::on_FrameDegree_spinBox_valueChanged(int arg1)
{
	qDebug() << tr("边框粗细为") << arg1;
}

//线型
void parameter::on_LineShape_1_toggled(bool checked)
{
	if (checked) {
		qDebug() << tr("选择线型I");
	}
}

void parameter::on_LineShape_2_toggled(bool checked)
{
	if (checked) {
		qDebug() << tr("选择线型II");
	}
}

void parameter::on_LineShape_3_toggled(bool checked)
{
	if (checked) {
		qDebug() << tr("选择线型III");
	}
}

void parameter::on_LineShape_4_toggled(bool checked)
{
	if (checked) {
		qDebug() << tr("选择线型IV");
	}
}

void parameter::on_LineShape_5_toggled(bool checked)
{
	if (checked) {
		qDebug() << tr("选择线型V");
	}
}

//线粗细
void parameter::on_LineDegree_spinBox_valueChanged(int arg1)
{
	qDebug() << tr("连线粗细为") << arg1;
}

void parameter::on_fontComboBox_activated(const QString &arg1)
{
	qDebug() << arg1;
}

void parameter::on_Font_spinBox_valueChanged(int arg1)
{
	qDebug() << tr("字体大小为") << arg1;
}
