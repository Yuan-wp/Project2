//#include<iostream>
//#include<fstream>
//#include<cstdlib>
//#include<ctime>
//#include"Vector.h"
//using namespace VECTOR;
//int main()
//{
//	using namespace std;
//	ofstream fout;
//	fout.open("vector.txt");
//	double dstep,direction,target;
//	int step=0;
//	srand(time(0));
//	Vector temp;
//	Vector result(0, 0);
//	cout << "target= ";
//	while (cin >> target)
//	{
//		cout << "dstep= ";
//		if (!(cin >> dstep))
//			break;
//		fout << "Target Distance:" << target << " " << ", Step Size: " << dstep << endl;
//		while(result.magval()<target)
//		{
//			direction =rand() % 360;
//			temp.reset(dstep, direction, Vector::POL);
//			result=result+temp;
//			step++;
//			fout << step;
//			fout<<result << endl;
//			cout << step;
//			cout << result << endl;
//			
//		}
//		fout << "After " << step << " steps,the subject has the following location." << endl;
//		cout << "After " << step << " steps,the subject has the following location." << endl;
//		result.polar_model();
//		fout << result << endl;
//		fout << "Average outward distance per step = " << result.magval() / step << endl;
//		cout << result << endl;
//		cout << "Average outward distance per step = " << result.magval() / step << endl;
//		step = 0;
//		result.reset(0, 0);
//		cout << "Enter target distance (q to quit)" << endl;
//	}
//	cout << "bye" << endl;
//	return 0;
//}