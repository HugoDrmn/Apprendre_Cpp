#include "menu.h"

Menu::Menu(const std::string &_nom):nom(_nom),longueurMax(0)
{
    ifstream fichierMenu(_nom.c_str());
    if(!fichierMenu.is_open())
    {
        cerr<<"Erreur lors de l'ouverture du fichier"<<endl;
        nbOptions=0;
    }
    else
    {
        nbOptions=static_cast<int>(count(istreambuf_iterator<char>(fichierMenu),istreambuf_iterator<char>(),'\n'));
        fichierMenu.seekg(0,ios::beg);
        options = new string [nbOptions];
        for(int indice=0;indice<nbOptions;indice++)
        {
            getline(fichierMenu,options[indice]);
            if(static_cast<int>(options[indice].length())>longueurMax)
            {
                longueurMax = static_cast<int>(options[indice].length());
            }
        }
    }
    fichierMenu.close();
}


Menu::~Menu()
{
    delete [] options;
}

int Menu::Afficher()
{
    cout<<"+"<<setfill('-')<<setw(5)<<"+"<<setw(longueurMax+2)<<"+"<<endl;
    for(int indice=0;indice<nbOptions;indice++)
    {
        cout<<"|  "<<indice+1<<" |"<<setfill(' ')<<setw(longueurMax+1)<<left<< (string) options[indice]<<"|"<<endl;
    }
    cout<<"+"<<setfill('-')<<setw(5)<<"+"<<setw(longueurMax+2)<<"+"<<endl;
    cout <<"Votre choix SVP :  ";
    int choix;
    cin>>choix;
    return choix;
}

void Menu::AttendreAppuiTouche()
{

    string uneChaine;
    cout<<endl<<"appuyer sur la touche Entrée pour continuer...";
    getline(cin,uneChaine);
    cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
    system("clear");
}
