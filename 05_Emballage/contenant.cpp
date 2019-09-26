#include "contenant.h"
#include <iostream>

using namespace std;
Contenant::Contenant(const int _largeur, const int _hauteur, const int _profondeur):
    largeur(_largeur),
    hauteur(_hauteur),
    profondeur(_profondeur)
{
    cout << "Constructeur de la classe Contenant" << endl;
}

Contenant::~Contenant(){
    cout << "Destructeur de la classe Contenant" << endl;
}

int Contenant::CalculerVolume()
{
   return largeur * hauteur * profondeur;
}


