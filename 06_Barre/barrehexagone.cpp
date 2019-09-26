#include "barrehexagone.h"
#include <iostream>
#include <math.h>
using namespace std;

BarreHexagone::BarreHexagone(string _reference, int _longueur, float _densite, string _nomDeAlliage, double _diametre):
    Barre(_reference,_longueur,_densite,_nomDeAlliage),
    diametre(_diametre)
{
    cout << "Constructeur de la classe BarreHexagone" << endl;
}

double BarreHexagone::CalculerSection()
{
  double section = (2 * sqrt((3*diametre * diametre) / 4));
  return section;

}


double BarreHexagone::CalculerMasse()
{
    double section = CalculerSection();
    double masse = longueur * section * densite;
    return masse;
}
