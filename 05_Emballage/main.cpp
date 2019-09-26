#include <iostream>
#include "caissedebouteilles.h"
#include "carton.h"
using namespace std;

int main()
{
    /*
Carton unCarton(20,10,50,12);
cout << "Volume du carton: " << unCarton.CalculerVolume() << "m" << endl;
cout << "Poids Maxi du carton: " << unCarton.ObtenirPoidsMaxi() <<"kg" << endl;
*/
    CaisseDeBouteilles laCaisse(20,10,50,6,75);
cout << laCaisse.CalculerVolume() << " cl" << endl;
cout << laCaisse.Contenant::CalculerVolume() << " cm³" << endl;

return 0;
}
