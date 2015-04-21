#ifndef CARTE_H
#define CARTE_H

#include <QDialog>
#include <lib/QMapControl/src/mapcontrol.h>
#include <lib/QMapControl/src/osmmapadapter.h>
#include <lib/QMapControl/src/maplayer.h>

using namespace qmapcontrol;
namespace Ui {
class Carte;
}

class Carte : public QDialog
{
    Q_OBJECT

public:
    explicit Carte(QWidget *parent = 0);
    ~Carte();

private:
    Ui::Carte *ui;

    MapControl* mc;
    MapAdapter* mapadapter;
    Layer* mainlayer;
};

#endif // CARTE_H
