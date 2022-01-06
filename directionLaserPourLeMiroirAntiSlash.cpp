#include "directionLaserPourLeMiroirAntiSlash.h"


void directionLaserPourLeMiroirAntiSlash::deplacementHaut(terrain &t)
{
    t.d_tireur.d_x--;
    t.d_tireur.d_y--;
    while(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '1' && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '\\'  && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '/')
    {
        if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] == 'M')
        {
            t.d_score++;
        }
        t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] = '|';
        t.d_tireur.d_x--;
    }
}


void directionLaserPourLeMiroirAntiSlash::deplacementBas(terrain &t)
{
    t.d_tireur.d_x++;
    t.d_tireur.d_y++;
    while(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '1' && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '\\'  && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '/')
    {
        if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] == 'M')
        {t.d_score++;}
        t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] = '|';
        t.d_tireur.d_x++;
    }
}


void directionLaserPourLeMiroirAntiSlash::deplacementADroite(terrain &t)
{
    t.d_tireur.d_y++;
    t.d_tireur.d_x++;
    while(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '1' && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '\\'  && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '/')
    {
        if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] == 'M')
        {t.d_score++;}
        t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] = '-';
        t.d_tireur.d_y++;
    }
}


void directionLaserPourLeMiroirAntiSlash::deplacementAGauche(terrain &t)
{
    t.d_tireur.d_x--;
    t.d_tireur.d_y--;
    while(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '1' && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '\\'  && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '/')
    {
        if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] == 'M')
           {t.d_score++;}
        t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] = '-';
        t.d_tireur.d_y--;
    }
}

