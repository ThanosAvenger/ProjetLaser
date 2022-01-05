#include<iostream>

#include"point.h"



point::point() : point {0,0}
{}

point::point(int x, int y) : d_x{x}, d_y{y}
{}

int point::x() const
{
  return d_x;
}

int point::y() const
{
  return d_y;
}


void point::print(std::ostream& ost) const
{
    ost<<"("<<d_x<<","<<d_y<<")"<<std::endl;
}

void point::read(std::istream& ist)
{
    char c;
    ist>>c>>d_x>>c>>d_y>>c;
}

