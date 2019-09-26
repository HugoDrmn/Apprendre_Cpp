#include "barrerondecreuse.h"
#include <iostream>
#include <math.h>



BarreRondeCreuse::BarreRondeCreuse(string _reference, int _longueur, float _densite, string _nomDeAlliage, int _diametre, int _diametreTrou):
    BarreRonde(_reference,_longueur,_densite,_nomDeAlliage),
    diametre(_diametre),diametreTrou(_diametreTrou)
{
    cout << "Constructeur de la classe BarreRondeCreuse" << endl;
}
double BarreRondeCreuse::CalculerSection()
{
   double section = ((M_PI * diametre * diametre) / 4) - ((M_PI * diametreTrou * diametreTrou) / 4);
   return section;
}

double BarreRondeCreuse::CalculerMasse()
{
    double section = CalculerSection();
    double longueur = static_cast<double>(longueur);
    double masse = longueur * section * densite;
    return masse;
}
