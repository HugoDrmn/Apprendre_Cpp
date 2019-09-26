#ifndef BARRECARRE_H
#define BARRECARRE_H

#include "barre.h"

class BarreCarre : public Barre
{
public:
    BarreCarre(string _reference, int _longueur,int _densite, string _nomDeAlliage, int _cote);
    double CalculerSection();
    double CalculerMasse();
private:
    int cote;
};

#endif // BARRECARRE_H
