#ifndef MIROIR_H_INCLUDED
#define MIROIR_H_INCLUDED
#include "terrain2.h"
#include "point.h"

class miroir{
public:
    int calculNombreDeMiroirAPoser(terrain &t);
    point positionMiroir(int numMiroir, terrain& t);
    void poseMiroir(terrain &t);

};


#endif // MIROIR_H_INCLUDED
