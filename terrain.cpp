#include"terrain.h"
#include<fstream>
#include <stdlib.h>

using namespace std;

terrain::terrain():d_nomFichier{}, d_tireur{}, d_cible{}, d_score{0}, d_largeur{0}, d_longueur{0}
{}


terrain::terrain(const std::string &nomFichier): d_nomFichier{nomFichier}, d_tireur{}, d_cible{}, d_score{0}, d_largeur{0}, d_longueur{0}
{}

void terrain::ajoutDeMonstre(int nbrMonstre)
{
     for(int i=0;i<nbrMonstre;i++)
     {
        do{
            x = rand() % (d_largeur-2) + 1; // dans l'intervalle [1,d_longueur]
            y = rand() % (d_longueur-2) + 1; // dans l'intervalle [2,d_largeur]
            if (d_terrain[x][y]!='#' && d_terrain[x][y]!='@' && d_terrain[x][y]=='1' && d_terrain[x][y]!='M')
            {
                d_terrain[x][y]='M';
            }
        }while(d_terrain[x][y]=='#' || d_terrain[x][y]=='@' || d_terrain[x][y]=='1' && d_terrain[x][y]=='M');
      }

}



void terrain::chargeTerrain()
{
    cout<<"veuillez choisir le niveau de difficulte : 1:Debutant     2:Normal     3:Avancee"<<endl;
    cin>>d_level;
    //chargement du terrain
    ifstream monFichier(d_nomFichier);
    if(monFichier)
    {
        monFichier>>d_longueur;
        monFichier>>d_largeur;
        d_score= {0};
        string ligne;
        int compteur=0;
        d_terrain.resize(d_longueur);
        getline(monFichier,ligne);
        while(getline(monFichier,ligne))
        {
            d_terrain[compteur].reserve(d_largeur);
            for(int j=0;j<d_largeur;j++)
            {
                d_terrain[compteur][j]=(ligne[j]);
                if(ligne[j] == '#') {d_tireur = {compteur,j};}
                if(ligne[j] == '@') {d_cible = {compteur,j};}
            }
            compteur++;
        }

        int x,y;
        if (d_level>1)
        {
            switch (d_level) {
            case 2 :
                ajoutDeMonstre(2);
                break;

            case 3 :
                ajoutDeMonstre(3);
                break;
        }

     }

}



void terrain::afficheTerrain()const
{
    cout<<endl<<"niveau : "<<d_level<<endl;
    for(int i=0 ; i<d_longueur;i++)
    {
        for(int j=0;j<d_largeur;j++)
            {
                if(d_terrain[i][j]=='1')
                   cout<<"x";
                   else if(d_terrain[i][j]=='0')
                   cout<<" ";
                        else
                            cout<<d_terrain[i][j];
           }
        cout<<endl;
    }
}



int terrain::largeur()const
{
    return d_largeur;
}

int terrain::longueur()const
{
    return d_longueur;
}

point terrain::tireur() const
{
    return d_tireur;
}

point terrain::cible() const
{
    return d_cible;
}

int terrain::level() const
{
    return d_level;
}

int terrain::score() const
{
    return d_score;
}


