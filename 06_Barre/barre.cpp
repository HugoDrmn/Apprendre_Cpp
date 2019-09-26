#include "barre.h"
#include <iostream>

using namespace std;

Barre::Barre(string _reference, float _longueur,float _densite, string _nomDeAlliage):
    reference(_reference),
    longueur(_longueur),
    densite(_densite),
    nomDeAlliage(_nomDeAlliage)
{
    cout << "Constructeur de la classe Barre" << endl;
}

void Barre::AfficherCaracteristiques()
{
    cout << "Référence: " << reference << endl;
    cout << "Longueur: " << longueur << endl;
    cout << "Densité : " << densite << endl;
    cout << "Nom de l'alliage: " << nomDeAlliage << endl;
}
