#include "barrecarre.h"
#include <iostream>
using namespace std;

BarreCarre::BarreCarre(string _reference, int _longueur, int _densite, string _nomDeAlliage, int _cote):
    Barre(_reference,_longueur,_densite,_nomDeAlliage),
    cote(_cote)
{
    cout << "Constructeur de la classe BarreCarre" << endl;
}

double BarreCarre::CalculerSection()
{
    double section = cote * cote;
    return section;
}

double BarreCarre::CalculerMasse()
{
    double section = CalculerSection();
    double masse = longueur * section * densite;
    return masse;
}
