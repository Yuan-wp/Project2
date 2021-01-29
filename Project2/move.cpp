#/*include<iostream>
#include"move.h"
Move::Move(double a , double b )
{
	x = a;
	y = b;
}
void Move::show() const
{
	using std::cout;
	cout << "x= " << x << "  " << "y= " << y << "\n";
}
Move Move::add(const Move& m) 
{
	x += m.x;
	y += m.y;
	return *this;

}
void Move::reset()
{
	x = 0;
	y = 0;
}*/