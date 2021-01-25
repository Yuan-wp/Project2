//#include<iostream>
//#include"sale.h"
//namespace SALES
//{
//	void set(Sales& s, const double arr[], int n)
//	{
//		double ch1 = arr[0];
//		double ch2 = arr[0];
//		double sum = 0;
//		int i;
//		for (i = 0; i < n && i < N; i++)
//		{
//			s.sales[i] = arr[i];
//			if (arr[i] < ch1)
//				ch1 = arr[i];
//			if (arr[i] > ch2)
//				ch2 = arr[i];
//			sum += arr[i];
//		}
//		s.max = ch2;
//		s.min = ch1;
//		s.average = sum / n;
//	}
//	void show(const Sales& s)
//	{
//		using std::cout;
//		using std::endl;
//		for(int i = 0; i < N;i++ )
//			cout << s.sales[i]<<" " ;
//		cout << endl;
//		cout << s.max << endl;
//		cout << s.min << endl;
//		cout << s.average << endl;
//	}
//	void set(Sales& s)
//	{
//		double ch1 = s.sales[0];
//		double ch2 = s.sales[0];
//		double sum = 0;
//		int i;
//		for (i = 0;  i < N; i++)
//		{
//			if (s.sales[i] < ch1)
//				ch1 = s.sales[i];
//			if (s.sales[i] > ch2)
//				ch2 = s.sales[i];
//			sum += s.sales[i];
//		}
//		s.max = ch2;
//		s.min = ch1;
//		s.average = sum / N;
//	}
//}