#include<iostream>
#include"complex.h"
Complex::Complex()
{
	re = im = 0;
}
Complex::Complex(double a,double b)
{
	re = a;
	im = b;
}
Complex::Complex(double a)
{
	re = a;
	im = 0;
}
Complex Complex::operator+(Complex& m)
{
	return Complex(re + m.re, im + m.im);
}
Complex Complex::operator-(Complex& m)
{
	return Complex(re - m.re, im - m.im);
}
Complex Complex::operator*(Complex& m)
{
	return Complex(re*m.re - m.im*im, m.re*im+re*m.im);
}
Complex Complex::operator*(double n) 
{
	return Complex(re*n, im*n);
}

std::ostream& operator<<(std::ostream& os, Complex m)
{
	os << "(" << m.re << " , " << m.im << ")";
		return os;
}
std::istream& operator>>(std::istream& os, Complex& m)
{
	std::cout << "real : ";
	os >> m.re;
	std::cout << "imaginary : ";
	os >> m.im;
	return os;
}