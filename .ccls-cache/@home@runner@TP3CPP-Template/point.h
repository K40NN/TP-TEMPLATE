template <typename T> // Que fait le template?Comment fonctionne t il?
class pointT {
protected:
  T x;
  T y;

public:
  pointT(T x, T y);
  pointT();
  T getX() const;
  void setX(T x);
  T getY() const;
  void setY(T x);
  T norm2() const;
};
template <typename T> pointT<T>::pointT(T x, T y) {
  this->x = x;
  this->y = y;
}

template <typename T> pointT<T>::pointT() {
  this->x = T();
  this->y = T();
}
template <typename T> T pointT<T>::getX() const { return this->x; }
template <typename T> void pointT<T>::setX(T x) { this->x = x; }

template <typename T>

T pointT<T>::getY() const {
  return this->y;
}

template <typename T> void pointT<T>::setY(T y) { this->y = y; }
template <typename T>

T pointT<T>::norm2() const {
  return x * x + y * y;
}
