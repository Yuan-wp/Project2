//#include<iostream>
//#include"intake.h"
//int main()
//{
//	using namespace std;
//	Intake st;
//	customer ch;
//	char pt;
//	double sum = 0;
//	cout << "Please enter Ato add a purchase order.\n" << "P to process a ch, or Q to quit.\n ";
//	while (cin >> pt && toupper(pt) != 'Q')
//	{
//		while (cin.get() != '\n')
//			continue;
//		if (!isalpha(pt))
//		{
//			cout << '\a';
//			continue;
//		}
//		switch (pt)
//		{
//		case'A':
//		case 'a':cout << "Enter a fullname to add  ";
//			cin.get(ch.fullname, 35);
//			cout << "Enter a payment to add  ";
//			cin >> ch.payment;
//			if (st.isfull())
//				cout << "customer already full\n";
//			else
//				st.push(ch);
//			break;
//		case 'p':
//		case 'P':
//			if (st.isempty())
//				cout << "customer already empty\n";
//			else 
//			{
//				st.pop(ch);
//				sum+=ch.payment;
//				cout << ch.fullname << " " << ch.payment;
//			}
//			break;
//		}
//		cout << "Pleaae enter A to add a purchase order .\n";
//
//	}
//	cout << "sum= " << sum << endl;
//	cout << "bye\n";
//	return 0;
//}