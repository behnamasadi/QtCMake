#include "example_form.h"
#include "ui_example_form.h"

example_form::example_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::example_form)
{
    ui->setupUi(this);
}

example_form::~example_form()
{
    delete ui;
}
