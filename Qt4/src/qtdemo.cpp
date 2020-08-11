#include "qtdemo.h"
#include <QMessageBox>
qtdemo::qtdemo(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);
	//signal, slot
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(printhelloworld()));

/*

action

http://qt-project.org/doc/qt-4.8/qaction.html#details

In applications many common commands can be invoked via menus, toolbar buttons, and keyboard shortcuts.
Since the user expects each command to be performed in the same way, regardless of the user interface used, it is useful to
represent each command as an action.

Actions can be added to menus and toolbars, and will automatically keep them in sync.

For example, in a word processor, if the user presses a Bold toolbar button, the Bold menu item will automatically be checked.



A QAction may contain an icon, menu text, a shortcut, status text, "What's This?" text, and a tooltip.
Most of these can be set in the constructor.
They can also be set independently with setIcon(), setText(), setIconText(), setShortcut(), setStatusTip(), setWhatsThis(), and setToolTip().
For menu items, it is possible to set an individual font with setFont().








*/
	ui.actionChange_the_text = new QAction(QIcon("images/info.png"), tr("&Chnage..."), this);
	ui.toolBar->addAction(ui.actionChange_the_text);
	ui.pushButton_2->addAction(ui.actionChange_the_text);
	ui.actionChange_the_text->setShortcut(tr("Ctrl+I"));
	connect(ui.actionChange_the_text, SIGNAL(triggered()), this, SLOT(changingText()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(changingText()));


	connect(ui.btnSignalCallingSignal, SIGNAL(clicked()), this, SLOT( showMessageBox()  ));


	ui.lblMouse->installEventFilter(this);


//	QAction *action = new QAction(tr("Action"), this);
//	action->setCheckable(true);
//
//	QMenu *menu = menuBar()->addMenu(tr("File"));
//	menu->addAction(action);
//
//	QPushButton *pb = new QPushButton(tr("Button"), this);
//	pb->setCheckable(true);
//
//	connect(action, SIGNAL(toggled(bool)), pb, SLOT(setChecked(bool)));
//	connect(pb, SIGNAL(toggled(bool)), action, SLOT(setChecked(bool)));


}

bool qtdemo::eventFilter(QObject *target, QEvent *event)
{

	if(target==ui.lblMouse)
	{
		if (event->type() ==QEvent::MouseButtonPress)
		{
			//QMessageBox::information(this, tr("pop up messagebox title"),tr("click happened"));
			QString x="click happened";
			ui.lblMouse_Current_Event->setText(x);


			QString fileName = QFileDialog::getOpenFileName(this,tr("Open File"), QDir::currentPath());
			QImage image(fileName);
			ui.label->setPixmap(QPixmap::fromImage(image));

			return true;
		}
		else if(event->type()==QEvent::MouseMove)
		{
			QMouseEvent *mouseEvent= static_cast<QMouseEvent *>(event);
			int x=mouseEvent->pos().x();
			int y=mouseEvent->pos().y();
			ui.lblMouse->setText( QString ("x is %1 and y is :%2").arg(x).arg(y));
			ui.lblMouse_Current_Position->setText( QString ("x is %1 and y is :%2").arg(x).arg(y));

			return true;

		}
		else if(event->type()==QEvent::KeyPress)
		{
			QKeyEvent *keypress=static_cast<QKeyEvent *>(event);
			QMessageBox::information(this,"title",QString(keypress->key()) );
			return true;
		}

	}
	return QMainWindow::eventFilter(target, event);


}

qtdemo::~qtdemo()
{

}

void qtdemo::printhelloworld()
{
	QString x="hello world";
	ui.lineEdit->setText(x);
}

void qtdemo::changingText()
{
	//QString x="x";
	ui.lineEdit_2->setText( ui.lineEdit_2->text()+ui.lineEdit_2->text()  );
}

void qtdemo::clickonLable()
{

}


void qtdemo::showMessageBox()
{
	 QMessageBox::information(this, tr("pop up messagebox title"),tr("some info"));
}
