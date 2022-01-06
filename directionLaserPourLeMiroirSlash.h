#ifndef DIRECTIONLASERPOURLEMIROIRSLASH_H
#define DIRECTIONLASERPOURLEMIROIRSLASH_H
#include "terrain2.h"
#include "directionLaser.h"

class directionLaserPourLeMiroirSlash : public directionLaser {

public :
    virtual void deplacementHaut(terrain &t) override;
    virtual void deplacementBas(terrain &t) override;
    virtual void deplacementADroite(terrain &t) override;
    virtual void deplacementAGauche(terrain &t) override;

};



#endif



