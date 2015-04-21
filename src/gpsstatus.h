#ifndef GPSSTATUS_H
#define GPSSTATUS_H

#include <QDialog>

namespace Ui {
class GPSStatus;
}

class GPSStatus : public QDialog
{
    Q_OBJECT

public:
    explicit GPSStatus(QWidget *parent = 0);
    ~GPSStatus();

private:
    Ui::GPSStatus *ui;
};

#endif // GPSSTATUS_H
