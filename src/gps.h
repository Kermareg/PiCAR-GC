#ifndef GPS_H
#define GPS_H

#include <QObject>

class GPS : public QObject
{
    Q_OBJECT
public:
    explicit GPS(QObject *parent = 0);
    ~GPS();

signals:

public slots:
};

#endif // GPS_H
