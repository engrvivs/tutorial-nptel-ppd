#include "Complex.hpp"
#include "Common.hpp"

Complex::Complex(double re, double im) : re_{re}, im_{im} { DEBUG_DISPLAY; }

Complex::Complex(const Complex &c) : re_{c.re_}, im_{c.im_} { DEBUG_DISPLAY; }

Complex::~Complex() { DEBUG_DISPLAY; }

double Complex::norm() const { return ((re_ * re_) + (im_ * im_)); }

void Complex::print() const { std::cout << re_ << " + " << im_ << "j"; }
