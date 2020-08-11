#ifndef EXAMPLE_FORM_H
#define EXAMPLE_FORM_H

#include <QWidget>

namespace Ui {
class example_form;
}

class example_form : public QWidget
{
    Q_OBJECT

public:
    explicit example_form(QWidget *parent = 0);
    ~example_form();

private:
    Ui::example_form *ui;
};

#endif // EXAMPLE_FORM_H
