#include <iostream>
#include "terrain2.h"
#include "miroir2.h"
#include"deplaceLaser.h"
#include"point.h"


using namespace std;

int main()
{

    terrain t{"terrainDeJeu1.txt"};
    t.chargeTerrain();
    t.afficheTerrain();
    miroir m{};
    m.poseMiroir(t);
    /*
    deplaceLaser d;
    d.deplacerLaserEnDirection(t);
    */

    return 0;
}
