#ifndef DEPLACEMENT_H_INCLUDED
#define DEPLACEMENT_H_INCLUDED
#include"terrain2.h"


class directionLaser {
public:
    virtual void deplacementHaut(terrain &t) =0;
    virtual void deplacementBas(terrain &t) =0;
    virtual void deplacementADroite(terrain &t) =0;
    virtual void deplacementAGauche(terrain &t) =0;


};

#endif // DEPLACEMENT_H_INCLUDED
