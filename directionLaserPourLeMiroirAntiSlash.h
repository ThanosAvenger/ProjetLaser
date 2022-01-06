#ifndef DIRECTIONLASERPOURLEMIROIRANTISLASH_H
#define DIRECTIONLASERPOURLEMIROIRANTISLASH_H
#include "terrain2.h"
#include "directionLaser.h"

class directionLaserPourLeMiroirAntiSlash : public directionLaser{

public :
    virtual void deplacementHaut(terrain &t) override;
    virtual void deplacementBas(terrain &t) override;
    virtual void deplacementADroite(terrain &t) override;
    virtual void deplacementAGauche(terrain &t) override;

};



#endif
