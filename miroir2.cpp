#include<iostream>
#include"deplacement.h"
#include"miroir2.h"

using namespace std;


/*la fonction poseMiroir s'occupe de placer un certains nombre de miroirs à l'interieur du terrain
le nombre de miroir pouvant etre posés sera défini en fonction du niveau du jeu que l'utilisateur aura choisi
plus le niveau du jeu sera élevé et plus le nombre de miroir possible diminuera afin que cela soit cohérent avec la difficulté du jeu
*/

int miroir::calculNombreDeMiroirAPoser(terrain &t)
{
    int x,y,nbMiroir;


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
            cout<<"choisissez la position x du miroir : "<<numMiroir+1<<endl;
            cin>>x;
            cout<<"choisissez la position y du miroir : "<<numMiroir+1<<endl;
            cin>>y;
        }while(  ( x<1 || x>t.largeur()-2 ||  y<1 || y>t.longueur()-2)  || (t.d_terrain[x][y]=='#' || t.d_terrain[x][y]=='@' || t.d_terrain[x][y]=='1' && t.d_terrain[x][y]=='M')  );
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

        t.d_terrain[p.x()][p.y()]=miroir;
        t.afficheTerrain();
    }
}


/*void miroir::Miroir1(terrain &t) // Miroir : /
{
    deplacement d;
    if(t.d_terrain[t.d_depart.d_x][t.d_depart.d_y-1] == '-')
        d.deplacementHaut(t);
    else if(t.d_terrain[t.d_depart.d_x-1][t.d_depart.d_y] == '|')
            d.deplacementAGauche(t);
        else if(t.d_terrain[t.d_depart.d_x+1][t.d_depart.d_y] == '|')
                d.deplacementADroite(t);
            else if(t.d_terrain[t.d_depart.d_x][t.d_depart.d_y+1] == '-')
                    d.deplacementBas(t);
}


void miroir::Miroir2(terrain &t) /* Miroir : \
{
    deplacement d;
    if(t.d_terrain[t.d_depart.d_x][t.d_depart.d_y-1] == '-')
        d.deplacementBas(t);
    else if(t.d_terrain[t.d_depart.d_x-1][t.d_depart.d_y] == '|')
            d.deplacementADroite(t);
        else if(t.d_terrain[t.d_depart.d_x+1][t.d_depart.d_y] == '|')
                d.deplacementAGauche(t);
            else if(t.d_terrain[t.d_depart.d_x][t.d_depart.d_y+1] == '-')
                    d.deplacementHaut(t);
}
*/
