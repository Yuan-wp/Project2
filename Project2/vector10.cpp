//#include<iostream>
//#include"vector10.h"
//#include<cmath>
//namespace VECTOR
//{
//	const double Rad_to_deg = 57.2957795130823;
//	void Vector::setx(double mag,double ang)
//	{
//		x= mag * sin(ang);
//	}
//	void Vector::sety(double mag,double ang)
//	{
//		y= mag * cos(ang);
//	}
//	double Vector::setmag()
//	{
//		return sqrt(x * x + y * y);
//	}
//	double Vector::setang()
//	{
//		if (x == 0 && y == 0)
//			return  0;
//		else
//			return atan2(y , x);
//	}
//	Vector::Vector()
//	{
//		model = RECT;
//		x = y =0;
//
//	}
//	Vector::Vector(double a, double b, Model form)
//	{
//		model = form;
//		if (form == RECT)
//		{
//			x = a;
//			y = b;
//
//		}
//		else if (form == POL)
//		{
//			setx(a,b);
//			sety(a,b);
//		}
//		else
//			std::cout << "warning" << std::endl;
//
//	}
//	void Vector::reset(double a, double b, Model form )
//	{
//		model = form;
//		if (form == RECT)
//		{
//			x = a;
//			y = b;
//
//		}
//		else if (form == POL)
//		{
//			setx(a,b);
//			sety(a,b);
//		}
//		else
//		{
//			std::cout << "warning" << std::endl;
//			model = RECT;
//			x = y =  0;
//		}
//	}
//	double Vector::magval()
//	{
//		return setmag();
//	}
//	double Vector::angval()
//	{
//		return setang();
//	}
//	Vector::~Vector()
//	{
//
//	}
//	void Vector::polar_model()
//	{
//		model = POL;
//	}
//	void Vector::rect_model()
//	{
//		model = RECT;
//	}
//	Vector Vector::operator+(const Vector& b)const
//	{
//		return Vector(x+b.x, y+b.y);
//	}
//	Vector Vector::operator-(const Vector& b)const
//	{
//		return Vector(x - b.x, y - b.y);
//	}
//	Vector Vector::operator*(double n)const
//	{
//		return Vector(n*x,n*y);
//	}
//	 Vector operator *(double n, const Vector& b)
//	{
//		return b*n;
//	}
//	 std::ostream & operator<<(std::ostream& os, Vector& b)
//	 {
//		 if (b.model == Vector::RECT)
//		 {
//			 os << "(x,y)" << " = " << "(" << b.x << ", " << b.y << ")";
//		 }
//		 else
//		 {
//			 os << "(m,a)" << " = " << "(" << b.setmag() << ", " << b.setang()*Rad_to_deg << ")";
//		 }
//		 return os;
//	 }
//}