#include <iostream>
#include "barre.h"
#include "barreronde.h"
#include "barrerectangle.h"
#include "barrecarre.h"
#include "barrehexagone.h"
#include "barrerondecreuse.h"
using namespace std;

int main()
{


    BarreRondeCreuse laBarre("A1A1",7,3,"cuivre",4,2);
    double section = laBarre.CalculerSection();
    cout <<"le diamètre de la barre est de très exactement "<< section<<"cm" << endl;
    double masse = laBarre.CalculerMasse();
    cout <<"Et sa masse quand a elle est de "<< masse <<"Kg"<< endl;


    return 0;
}
