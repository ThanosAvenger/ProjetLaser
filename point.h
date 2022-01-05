#ifndef POINT_H
#define POINT_H


class point {
    friend class directionLaserPourLeMiroirAntiSlash;
    friend class directionLaserPourLeMiroirSlash;
    friend class terrain;
public:

  point();

  point(int x, int y);

  int x()  const;

  int y()  const;

  void print(std::ostream& ost) const;

  void read(std::istream& ist);

private :
  int d_x,d_y;
};


#endif
