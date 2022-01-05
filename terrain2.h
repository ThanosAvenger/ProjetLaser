#ifndef TERRAIN_H_INCLUDED
#define TERRAIN_H_INCLUDED

#include<iostream>
#include<fstream>
#include<vector>
#include<string.h>
#include"point.h"





class terrain{
    friend class deplacement;
    friend class miroir;
public :
    terrain();
    terrain(const std::string &nomFichier);
    int largeur()const;
    int longueur()const;
    point tireur() const;
    point cible() const;
    int score() const;
    int level() const;
    void ajoutDeMonstre(int nbrMonstre);
    void chargeTerrain();
    void afficheTerrain()const;
    const point& position()const;

private :
    std::vector<std::vector<char> > d_terrain;// pour la partie texte.
    std::string d_nomFichier;
    int d_largeur;
    int d_longueur;
    point d_tireur;
    point d_cible;
    int d_score;
    int d_level;


};

#endif // TERRAIN_H_INCLUDED
