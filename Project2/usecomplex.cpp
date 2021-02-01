#include<iostream>
#include"complex.h"
int main()
{
	using namespace std;
	Complex a(15.2, -2.6);
	Complex c;
	cout << "Enter a complex number : " << endl;
	while(cin>>c)
	{
		cout << "c is " << c << '\n';
		cout << "a is " << a << endl;
		cout << "a + c is " << a + c << endl;
		cout << "a - c is " << a - c << endl;
		cout << "a * c is " << a * c << endl;
		cout << "2 * c is " << 2.0 * c << endl;
	}
	cout << "done";
	return 0;
	
}