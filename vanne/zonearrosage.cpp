#include "zonearrosage.h"

ZoneArrosage::ZoneArrosage(const int _numZone,const int _commandeVanne,const int _senseAVanne,const int _senseBVanne,const int _brocheHumidite):
    laVanne(_commandeVanne,_senseAVanne,_senseBVanne),
    numZone(_numZone),
    leCapteurHumidite(_brocheHumidite)
{
    cout << "Constructeur de ZoneArrosage N°" << numZone << endl;
}

void ZoneArrosage::Piloter()
{
    laVanne.Ouvrir();

    if(leCapteurHumidite.MesurerHumiditeDuSol() > 80){
        laVanne.Fermer();
    }

}
