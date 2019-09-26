#include "barreronde.h"
#include <iostream>
#include <math.h>
using namespace std;

BarreRonde::BarreRonde(string _reference, int _longueur, float _densite, string _nomDeAlliage, int _diametre):
    Barre(_reference,_longueur,_densite,_nomDeAlliage),
    diametre(_diametre)
{
    cout << "Constructeur de la classe BarreRonde" << endl;
}

double BarreRonde::CalculerSection()
{
   double section = (M_PI * diametre * diametre) / 4;
   return section;
}

double BarreRonde::CalculerMasse()
{
    double section = CalculerSection();
    double masse = longueur * section * densite;
    return masse;
}
