#pragma once

class Complex {
private:
  double re_, im_;

public:
  Complex() = default;
  Complex(double re, double im);
  Complex(const Complex &c);
  ~Complex();
  double norm() const;
  void print() const;
};
