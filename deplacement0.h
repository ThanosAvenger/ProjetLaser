#ifndef DEPLACEMENT_H_INCLUDED
#define DEPLACEMENT_H_INCLUDED
#include"terrain2.h"


class deplacement {
public:
    void deplacementHaut(terrain &t);
    void deplacementBas(terrain &t);
    void deplacementADroite(terrain &t);
    void deplacementAGauche(terrain &t);
    void deplacementLaser(terrain &t);

};

#endif // DEPLACEMENT_H_INCLUDED
