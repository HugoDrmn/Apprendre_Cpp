#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main()
{
   string nomDuFichier;
   string nomDuFichier2;
   cout<<"Entrer le nom du fichier à lire:";
   cin>>nomDuFichier;
   cout<<"Entrer le nom du fichier à écrire:";
   cin>>nomDuFichier2;
   //Créationdufluxenlecturesurlefichier
   ifstream leFichier(nomDuFichier.c_str());// c_str() transforme string en char*
   ofstream fichier(nomDuFichier2.c_str());
   if(!leFichier.is_open())
       cerr<<"Erreur lors de l'ouverture du fichier"<<endl;
   else
   {
       string pays;
       int nbOr;
       int nbArgent;
       int nbBronze;
       fichier<<"+"<<setfill('-')<<setw(17)<<"+"<<setfill('-')<<setw(9)<<"+"<<setfill('-')<<setw(9)<<"+"<<setfill('-')<<setw(9)<<"+"<<endl;
       do
       {
           //récupération des valeurs
           leFichier>>pays>>nbOr>>nbArgent>>nbBronze;
           if(leFichier.good())//Si les valeurs ont bien été lues
           {
               fichier << "|"<<setfill(' ') << setw(16) << left << pays << "|" << setw(8) << right << nbOr << "|" << setw(8) << right << nbArgent << "|"  << setw(8) << right << nbBronze << "|" << endl ;
           }
       }while(!leFichier.eof());
       fichier<<"+"<<setfill('-')<<setw(17)<<"+"<<setfill('-')<<setw(9)<<"+"<<setfill('-')<<setw(9)<<"+"<<setfill('-')<<setw(9)<<"+"<<endl;
   }
   leFichier.close();
   fichier.close();
   return 0;
}
