#include "qtdemo.h"
#include "example_form.h"
#include <QtGui>
#include <QApplication>
#include <QtGui/QWidget>


void create_GUI_Without_UI_File(QApplication * app)
{
    QLabel *label=new QLabel("NO UI file has been used to creat this GUI");
    QPushButton * button=new QPushButton("click to close the window");

    button->show();
    //label->show();


    QSpinBox *spinbox=new QSpinBox();
    spinbox->setRange(0,100);


    QSlider *slider=new QSlider();
    slider->setRange(0,100);


    QHBoxLayout *layout=new QHBoxLayout() ;
    layout->addWidget(slider);
    layout->addWidget(spinbox);
    layout->addWidget(button);
    layout->addWidget(label);

    QObject::connect(button,SIGNAL(clicked()),app,SLOT(quit()) );

    QObject::connect(slider,SIGNAL(valueChanged(int)),spinbox ,SLOT( setValue(int) ) );
    QObject::connect(spinbox,SIGNAL(valueChanged(int)),slider,SLOT(setValue(int)) );


    QWidget *window=new QWidget();
    window->setWindowTitle("hello");
    window->setLayout(layout);
    window->show();
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    create_GUI_Without_UI_File( &app);
    qtdemo w;
    w.show();

//    example_form example_form_obj;
//    example_form_obj.show();

    return app.exec();
}
