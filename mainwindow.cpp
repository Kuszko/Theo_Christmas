#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qtimer.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);    
	QTimer *timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(update()));
	timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Update()
{

}