#ifndef CAISSEDEBOUTEILLES_H
#define CAISSEDEBOUTEILLES_H
#include "contenant.h"

class CaisseDeBouteilles : public Contenant
{
private:
int nbBouteilles;
int contenance;
public:
    CaisseDeBouteilles(const int _largeur, const int _hauteur, const int _profondeur,int _nbBouteilles, int _contenance);
    ~CaisseDeBouteilles();
    float CalculerVolume();
};

#endif // CAISSEDEBOUTEILLES_H
