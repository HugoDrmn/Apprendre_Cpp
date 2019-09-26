#ifndef BARRE_H
#define BARRE_H

#include <string>
using namespace std;
class Barre
{
public:
    Barre(string _reference,float _longueur,float _densite,string _nomDeAlliage);
    void AfficherCaracteristiques();
protected:
     string reference;
     float longueur;
     float densite;
     string nomDeAlliage;
};

#endif // BARRE_H
