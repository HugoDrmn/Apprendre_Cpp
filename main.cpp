#include <iostream>
#include<string>
#include "menu.h"


int main()
{
    int choix;
    Menu leMenu("menu.txt");
    do
    {
        choix=leMenu.Afficher();
        switch(choix)
        {
        case OPTION_1:
        cout<<"Vous avez choisi l'option n°1"<<endl;
        leMenu.AttendreAppuiTouche();
        break;
        case OPTION_2:
        cout<<"Vous avez choisi l'option n°2"<<endl;
        leMenu.AttendreAppuiTouche();
        break;
        case OPTION_3:
        cout<<"Vous avez choisi l'option n°3"<<endl;
        leMenu.AttendreAppuiTouche();
        break;
        case OPTION_4:
        cout<<"Vous avez choisi l'option n°4"<<endl;
        leMenu.AttendreAppuiTouche();
        break;




        }
    }while(choix!=QUITTER);
    return 0;
}
