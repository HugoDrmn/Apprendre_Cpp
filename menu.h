#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

class Menu
{
private:
    std::string nom;
    std::string* options;
    int nbOptions;
    int longueurMax;
public:
    Menu(const std::string &_nom);
    ~Menu();
    int Afficher();
    void AttendreAppuiTouche();
};
enum CHOIX_MENU
{
    OPTION_1=1,
    OPTION_2=2,
    OPTION_3=3,
    OPTION_4=4,
    QUITTER=5
};

#endif // MENU_H
