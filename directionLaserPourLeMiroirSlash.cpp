#include "directionLaserPourLeMiroirSlash.h"




void directionLaserPourLeMiroirSlash::deplacementHaut(terrain &t)
{
    t.d_tireur.d_x--;
    t.d_tireur.d_y++;
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


void directionLaserPourLeMiroirSlash::deplacementBas(terrain &t)
{
    t.d_tireur.d_x++;
    t.d_tireur.d_y--;
    while(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '1' && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '\\'  && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '/')
    {
        if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] == 'M')
        {t.d_score++;}
        t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] = '|';
        t.d_tireur.d_x++;
    }
}


void directionLaserPourLeMiroirSlash::deplacementADroite(terrain &t)
{
    t.d_tireur.d_y++;
    t.d_tireur.d_x--;
    while(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '1' && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '\\'  && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '/')
    {
        if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] == 'M')
        {t.d_score++;}
        t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] = '-';
        t.d_tireur.d_y++;
    }
}


void directionLaserPourLeMiroirSlash::deplacementAGauche(terrain &t)
{
    t.d_tireur.d_x++;
    t.d_tireur.d_y--;
    while(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '1' && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '\\'  && t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] != '/')
    {
        if(t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] == 'M')
           {t.d_score++;}
        t.d_terrain[t.d_tireur.d_x][t.d_tireur.d_y] = '-';
        t.d_tireur.d_y--;
    }
}


