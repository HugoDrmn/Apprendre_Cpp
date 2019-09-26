#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H

#include "barre.h"

class BarreRectangle : public Barre
{
public:
    BarreRectangle(string _reference, int _longueur,int _densite, string _nomDeAlliage, int _largeur);
    double CalculerSection();
    double CalculerMasse();
private:
    int largeur;
};

#endif // BARRERECTANGLE_H
