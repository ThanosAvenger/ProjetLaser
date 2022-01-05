#ifndef TERRAIN_H_INCLUDED
#define TERRAIN_H_INCLUDED

#include<iostream>
#include<fstream>
#include<vector>
#include<string.h>
#include"point.h"





class terrain{
public :
    terrain();
    terrain(const point& position,int tailleCase, const std::string &nomFichier, std::vector<std::vector<Case*> > terrain);
    terrain(const std::string &nomFichier);
    int largeur()const;
    int longueur()const;
    point tireur() const;
    point cible() const;
    int score() const;
    void chargerTerrain();
    void afficheTerrain()const;
    const point& position()const;
    

    void chargerTerrain();
    std::vector<std::vector<char> > d_terrain;// pour la partie texte.
    std::string d_nomFichier;
    int d_largeur;
    int d_longueur;
    point tireur;
    point d_cible;
    int d_score;


};

#endif // TERRAIN_H_INCLUDED
