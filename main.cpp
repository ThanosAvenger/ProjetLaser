#include <iostream>
#include "terrain.h"
#include "miroir.h"
#include"fenetre.h"
#include"deplacerlaser.h"
#include"point.h"
#include"case.h"


using namespace std;

int main()
{
    /*
    terrain t{"terrainDeJeu1.txt"};
    t.chargeTerrain();
    t.afficheTerrain();
    miroir m{};
    m.poseMiroir(t);
    deplaceLaser d;
    d.deplacerLaserEnDirection(t);
    */



   fenetre fenetre{900,800};
   terrain t{"terrainDeJeu1.txt"};

   fenetre.open();
   t.dessineTerrain(fenetre);

   fenetre.repeteJusquaBouton();

    return 0;
}
