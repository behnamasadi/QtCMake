#ifndef QTDEMO_H
#define QTDEMO_H

#include <QtGui/QMainWindow>
#include "ui_qtdemo.h"
#include <QMouseEvent>
#include <QDebug>
#include <QEvent>
#include <QFileDialog>
class qtdemo : public QMainWindow
{
    Q_OBJECT

private slots:
	void changingText();
	void printhelloworld();
	void clickonLable();
	void showMessageBox();

public:
    qtdemo(QWidget *parent = 0);
    ~qtdemo();
    bool eventFilter(QObject *target, QEvent *event);

private:
    Ui::qtdemoClass ui;
};

#endif // QTDEMO_H
