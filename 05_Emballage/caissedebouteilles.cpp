#include "caissedebouteilles.h"
#include <iostream>
using namespace std;
CaisseDeBouteilles::CaisseDeBouteilles(const int _largeur, const int _hauteur, const int _profondeur,int _nbBouteilles, int _contenance):
    Contenant (_largeur,_hauteur,_profondeur),
    nbBouteilles(_nbBouteilles),
    contenance(_contenance)
{
    cout << "Constructeur de la classe CaisseDeBouteilles" << endl;
       cout << "Largeur: " << largeur << " cm" << endl;
       cout << "Hauteur: " << hauteur << " cm" << endl;
       cout << "Profondeur: " << profondeur << " cm" << endl;
       cout << "nbBouteilles: " << nbBouteilles << endl;
       cout << "Contenance: " << contenance << " mL" << endl;
}

CaisseDeBouteilles::~CaisseDeBouteilles(){
     cout << "Destructeur de la classe CaisseDeBouteilles" << endl;
}

float CaisseDeBouteilles::CalculerVolume()
{
    return nbBouteilles * contenance;

}
