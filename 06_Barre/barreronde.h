#ifndef BARRERONDE_H
#define BARRERONDE_H

#include "barre.h"

class BarreRonde : public Barre
{
public:
    BarreRonde(string _reference, int _longueur,float _densite, string _nomDeAlliage, int _diametre);
    double  CalculerSection();
    double CalculerMasse();
private:
    int diametre;
};

#endif // BARRERONDE_H
