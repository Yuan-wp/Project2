//#include<iostream>
//#include"vector.h"
//#include<cmath>
//namespace VECTOR
//{
//	const double Rad_to_deg = 57.2957795130823;
//	void Vector::setx()
//	{
//		setang();
//		x = mag * sin(ang);
//	}
//	void Vector::sety()
//	{
//		setang();
//		y = mag * cos(ang);
//	}
//	void Vector::setmag()
//	{
//		mag = sqrt(x * x + y * y);
//	}
//	void Vector::setang()
//	{
//		if (x == 0 && y == 0)
//			ang = 0;
//		else
//			ang = atan2(y , x);
//	}
//	Vector::Vector()
//	{
//		model = RECT;
//		x = y = ang=mag=0;
//
//	}
//	Vector::Vector(double a, double b, Model form)
//	{
//		model = form;
//		if (form == RECT)
//		{
//			x = a;
//			y = b;
//			setang();
//			setmag();
//		}
//		else if (form == POL)
//		{
//			mag = a;
//			ang = b/Rad_to_deg;
//			setx();
//			sety();
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
//			setang();
//			setmag();
//		}
//		else if (form == POL)
//		{
//			mag = a;
//			ang = b / Rad_to_deg;
//			setx();
//			sety();
//		}
//		else
//		{
//			std::cout << "warning" << std::endl;
//			model = RECT;
//			x = y = ang = mag = 0;
//		}
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
//	 std::ostream & operator<<(std::ostream& os, const Vector& b)
//	 {
//		 if (b.model == Vector::RECT)
//		 {
//			 os << "(x,y)" << " = " << "(" << b.x << ", " << b.y << ")";
//		 }
//		 else
//		 {
//			 os << "(m,a)" << " = " << "(" << b.mag << ", " << b.ang*Rad_to_deg << ")";
//		 }
//		 return os;
//	 }
//}