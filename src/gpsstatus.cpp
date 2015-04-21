#include "gpsstatus.h"
#include "ui_gpsstatus.h"

GPSStatus::GPSStatus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GPSStatus)
{
    ui->setupUi(this);
}

GPSStatus::~GPSStatus()
{
    delete ui;
}
