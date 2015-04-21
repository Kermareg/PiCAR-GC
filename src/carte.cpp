#include "carte.h"
#include "ui_carte.h"

Carte::Carte(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Carte)
{
    ui->setupUi(this);
}

Carte::~Carte()
{
    delete ui;
}
