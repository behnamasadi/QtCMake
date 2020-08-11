#include "include/mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :    QMainWindow(parent),     ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText("Click Me!");
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(pushButtonclicked()));
}

void MainWindow::pushButtonclicked()
{
    ui->label->setText("Qt5 built with CMake!");
}

MainWindow::~MainWindow()
{
    delete ui;
}
