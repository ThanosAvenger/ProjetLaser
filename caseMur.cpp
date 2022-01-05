#include"caseMur.h"

caseMur::caseMur(bool mur): d_mur{mur}
{

}

bool caseMur::estMur() const
{
    return d_mur;
}

void caseMur::changeValMur(bool changeVal)
{
    d_mur = changeVal;
}

void caseMur::printt(std::ostream& ost)const
{
    ost<<d_mur;
}

std::ostream& operator<<(std::ostream& ost, const caseMur& c )
{
    c.printt(ost);
    return ost;
}

void caseMur::dessineCases(const fenetre& fenetre,const terrain& terrain,int ligne,int colonne)const
{
    if (estMur())
    {
        fenetre.dessineRectanglePlein(basGauche(terrain, ligne , colonne),hautGauche(terrain , ligne , colonne),
                                      hautDroit(terrain, ligne , colonne),basDroit(terrain, ligne , colonne));
    }
}

Case::~Case()
{

}
