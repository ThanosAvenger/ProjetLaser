#ifndef FENETRE_H_INCLUDED
#define FENETRE_H_INCLUDED
#include"fenetreAffichage.h"
#include"graphics(1).h"
#include"point.h"


class fenetre{

public:
    public :
/**
  Constructor with the dimensions of the scene
  @param width width of the scene
  @param height height of the scene
  @param borderx horizontal border added
  @param bordery vertical border added
*/
  fenetre(int width, int height, int borderx = 20, int bordery = 20);
/**
  Destructor: close the window if it has not been closed before.
*/
  ~fenetre();

/**
  Open the window
*/
  void open();
/**
  Close the window
*/
  void close();
/**
  Wait until the user click on the window with the mouse
*/
  void repeteJusquaBouton();
/**
  Wait for some time
  @param ms the waiting time in milliseconds
*/
  void wait(int ms = 50);

  void flush();
/**
  Clear the window.
*/
  void clear();
  void dessineSegment(const point& point1,const point& point2) const;
  void dessineRectangle(const point& basGauche, const point& hautDroit) const;
  void dessineRectanglePlein(const point& basGauche, const point& hautGauche,const point& hautDroit,const point& basDroit,int color= 0) const;
  int pixelx(double x) const;
  int pixely(double y) const;
private:
  ///size of the scene
  int      d_width, d_height;
  ///size of the added border
  int      d_borderx, d_bordery;
  ///indicate if the window is open
  bool     d_winopen;
  fenetreAffichage d_vpx,d_vpy;


};

#endif // FENETRE_H_INCLUDED
