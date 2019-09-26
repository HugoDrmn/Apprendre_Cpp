#ifndef BARRERONDECREUSE_H
#define BARRERONDECREUSE_H

#include "barreronde.h"

class BarreRondeCreuse : public BarreRonde
{
public:
    BarreRondeCreuse(string _reference, int _longueur,float _densite, string _nomDeAlliage, int _diametre, int _diametreTrou);
    double  CalculerSection();
    double CalculerMasse();
private:
    int diametre;
    int diametreTrou;
};

#endif // BARRERONDECREUSE_H
