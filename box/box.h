#ifndef __BOX_H
#define __BOX_H
#include <iostream>
class Box {
  int m_length;
  int m_breadth;
  int m_height;
  public:
  Box();
  Box(int,int,int);
  Box(int);
  Box(const Box&);
  ~Box();
  int length() const;
  int breadth() const;
  int height() const;
  int volume() const;
  void dispay() const;
};

#endif