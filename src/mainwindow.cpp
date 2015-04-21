#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "gpsstatus.h"
#include "carte.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusBar->showMessage(QString("PiCAR-GC version %1").arg(VERSION),5000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_cmdCarte_clicked()
{
    // Affichage de la carte.
    Carte map(this);
    map.exec();

}

void MainWindow::on_cmdGPS_clicked()
{
    // Affichage des status GPS
    GPSStatus status(this);
    status.exec();
}
