#include<iostream>
#include"miroir2.h"

using namespace std;

int miroir::calculNombreDeMiroirAPoser(terrain &t)
{
    int nbMiroir;

    cout<<"Veuillez saisir le nombre de miroir a placer dans le terrain"<<endl;
    cout<<"vous avez la possibilie de placer ";
    if (t.level()==1)
    {
        cout<<"jusqu'a 8 miroir"<<endl;
        do{
                cout<<"il est temps de saisir le nombre de miroir que vous souhaitez placer!!"<<endl;
                cin>>nbMiroir;
        }while (nbMiroir>8 || nbMiroir<1);
    }
    if (t.level()==2)
    {
        cout<<"jusqu'a 6 miroir"<<endl;
        do{
                cout<<"il est temps de saisir le nombre de miroir que vous souhaitez placer!!"<<endl;
                cin>>nbMiroir;
        }while (nbMiroir>8 || nbMiroir<1);
    }
    if (t.level()==3)
    {
        cout<<"jusqu'a 4 miroir"<<endl;
        do{
                cout<<"il est temps de saisir le nombre de miroir que vous souhaitez placer!!"<<endl;
                cin>>nbMiroir;
        }while (nbMiroir>8 || nbMiroir<1);
    }

    return nbMiroir;


}


point miroir::positionMiroir(int numMiroir, terrain& t)
{
    cout<<"miroir numero "<<numMiroir+1<<endl;
    int x,y;
        do
        {
            cout<<"veuillez saisir les coordonnees x et y du miroir a poser"<<endl;
            cin>>x;
            cin>>y;
        }while(   x<1 || x>t.largeur()-2 ||  y<1 || y>t.longueur()-2  || t.d_terrain[x][y]=='#' || t.d_terrain[x][y]=='@' || t.d_terrain[x][y]=='1' && t.d_terrain[x][y]=='M' );
        return point{x,y};
}


void miroir::poseMiroir(terrain &t)
{
    int nbMiroir=calculNombreDeMiroirAPoser(t);
    char miroir;

    for(int i=0;i<nbMiroir;i++)
    {
        point p=positionMiroir(i,t);
        cout<<"==> la position choisie est : ["<<p.x()<<","<<p.y()<<"]"<<endl;

        cout<<"selectionner le type de miroir que vous souhaitez poser"<<endl;
        do
        {
            cin>>miroir;
        }while(miroir != '/' && miroir != '\\');

        t.d_terrain[p.y()][p.x()]=miroir;
        t.afficheTerrain();
    }
}


