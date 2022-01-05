#ifndef MIROIR_H_INCLUDED
#define MIROIR_H_INCLUDED
#include "terrain2.h"
#include "point.h"

class miroir{
public:
    int calculNombreDeMiroirAPoser(terrain &t);
    point positionMiroir(int numMiroir, terrain& t);
    void poseMiroir(terrain &t);

//void Miroir1(terrain &t); // Miroir : /
//void Miroir2(terrain &t); // Miroir : \

};


#endif // MIROIR_H_INCLUDED
