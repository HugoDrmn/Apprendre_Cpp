#ifndef BARREHEXAGONE_H
#define BARREHEXAGONE_H

#include "barre.h"

class BarreHexagone : public Barre
{
public:
    BarreHexagone(string _reference, int _longueur,float _densite, string _nomDeAlliage, double _diametre);
    double  CalculerSection();
    double CalculerMasse();
private:
    double diametre;
};

#endif // BARREHEXAGONE_H
