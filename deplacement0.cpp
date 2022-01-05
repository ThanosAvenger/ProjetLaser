#include"deplacement.h"
#include <iostream>
using namespace std;

void deplacement::deplacementHaut(terrain &t)
{
    t.d_tireur.d_x--;
    while(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '1' && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '\\'  && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '/')
    {
        if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] == 'X')
            {t.d_score++;}
        t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] = '|';
        t.d_tireur.d_x--;
    }
}


void deplacement::deplacementBas(terrain &t)
{
    t.d_tireur.d_x++;
    while(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '1' && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '\\'  && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '/')
    {
        if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] == 'm')
            {t.d_score++;}
        t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] = '|';
        t.d_tireur.d_x++;
    }
}


void deplacement::deplacementADroite(terrain &t)
{
    t.d_tireur.d_y++;
    while(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '1' && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '\\'  && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '/')
    {
        if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] == 'm')
            {t.d_score++;}
        t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] = '-';
        t.d_tireur.d_y++;
    }
}


void deplacement::deplacementAGauche(terrain &t)
{
    t.d_tireur.d_y--;
    while(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '1' && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '\\'  && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '/')
    {
        if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] == 'm')
           {t.d_score++;}
        t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] = '-';
        t.d_tireur.d_y--;
    }
}


void deplacement::deplacementLaser(terrain &t)
{
    while(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '1' && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '@')
    {
        if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y]=='/')
         {
             if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y-1]=='-')
                deplacementHaut(t);
                else if(t.d_terrain[t.d_tireur.d_x-1][t.d_tireur.d_y]=='|')
                    deplacementAGauche(t);
                    else if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y+1]=='-')
                            deplacementBas(t);
                        else if(t.d_terrain[t.d_tireur.d_x+1][t.d_tireur.d_y]=='|')
                                deplacementADroite(t);
         }

          else if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y]=='\\')
         {
                        if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y-1]=='-')
                                deplacementBas(t);
                            else if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y+1]=='-')
                                    deplacementHaut(t);
                                else if(t.d_terrain[t.d_tireur.d_x-1][t.d_tireur.d_y]=='|')
                                        deplacementADroite(t);
                                    else if(t.d_terrain[t.d_tireur.d_x+1][t.d_tireur.d_y]=='|')
                                            deplacementAGauche(t);

         }
                else deplacementADroite(t);
    }
    t.afficheTerrain();
    if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] == '1')
        cout<<"Aiee vous avez herté un mur!"<<endl<<"Votre score est : "<<t.d_score<<endl;
    if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] == '@')
        cout<<"Bravo, cible touchée"<<endl<<"Votre score est : "<<t.d_score<<endl;
}
