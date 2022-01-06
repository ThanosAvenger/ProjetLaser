#include "deplaceLaser.h"
#include "directionLaserPourLeMiroirSlash.h"
#include "directionLaserPourLeMiroirAntiSlash.h"




void deplaceLaser::deplacerLaserEnDirection(terrain& t)
{
    while(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '1' && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '@'){

    if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y]=='/')
    {
        directionLaserPourLeMiroirSlash l;
        if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y+1]=='-'){
                l.deplacementHaut(t);}
                else if(t.d_terrain[t.d_tireur.d_x-1][t.d_tireur.d_y]=='|')
                     {l.deplacementAGauche(t);}
                     else if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y+1]=='-')
                            {l.deplacementBas(t);}
                        else if(t.d_terrain[t.d_tireur.d_x+1][t.d_tireur.d_y]=='|')
                                {l.deplacementADroite(t);}

    }

    if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y]=='\\')
    {
        directionLaserPourLeMiroirAntiSlash l;
               if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y+1]=='-'){
                l.deplacementHaut(t);}
                else if(t.d_terrain[t.d_tireur.d_x-1][t.d_tireur.d_y]=='|')
                    {l.deplacementAGauche(t);}
                    else if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y+1]=='-')
                            {l.deplacementBas(t);}
                        else if(t.d_terrain[t.d_tireur.d_x+1][t.d_tireur.d_y]=='|')
                                {l.deplacementADroite(t);}


    }

    }
}
