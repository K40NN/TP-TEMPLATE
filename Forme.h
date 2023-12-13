#ifndef FORME_H
#define FORME_H

#include "point.h"
#include <iostream>

template <typename T> class Forme {
private:
  pointT<T> centre;

public:
  Forme(T x, T y);
  friend std::ostream &operator<<(std::ostream &os, const Forme<T> &forme);

  virtual T perimetre() const = 0;
  virtual T surface() const = 0;
};

template <typename T> Forme<T>::Forme(T x, T y) : centre(x, y) {}

template <typename T>
std::ostream &operator<<(std::ostream &os, const Forme<T> &forme) {
  os << "Centre : (" << forme.centre.x << ", " << forme.centre.y << ")";
  return os;
}

#endif // FORME_H
