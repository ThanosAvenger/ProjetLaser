#ifndef CASEMUR_H_INCLUDED
#define CASEMUR_H_INCLUDED

#include"ostream"
#include"case.h"
#include"fenetre.h"

class caseMur : public Case
{
public:
    caseMur(bool mur);
    bool estMur() const;
    void changeValMur(bool changeVal);
    void printt(std::ostream& ost) const;
    virtual void dessineCases(const fenetre& fenetre,const terrain& terrain,int ligne,int colonne)const override;
private:
    bool d_mur;
};

std::ostream& operator<<(std::ostream& ost, const caseMur& c );

#endif // CASEMUR_H_INCLUDED
