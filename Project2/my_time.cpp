//#include"time.h"
//My_time::My_time()
//{
//	hour = minutes = 0;
//}
//My_time::My_time(int h, int m)
//{
//	hour = h;
//	minutes = m;
//}
//My_time My_time::operator+(My_time& a)const
//{
//	My_time m;
//	m.hour = hour + a.hour + (minutes + a.minutes) / 60;
//	m.minutes = (minutes + a.minutes) % 60;
//	return m;
//
//}
//My_time My_time::operator-(My_time& a)const
//{
//	My_time m;
//	m.hour = ((hour - a.hour)*60 + minutes - a.minutes) / 60;
//	m.minutes = ((hour - a.hour) * 60 + minutes - a.minutes) % 60;
//	return m;
//}
//My_time My_time::operator*(int n)const
//{
//	My_time m;
//	m.hour = (hour  * 60 + minutes )*n / 60;
//	m.minutes = (hour * 60 + minutes) * n % 60;
//	return m;
//}
//std::ostream& operator<<(std::ostream& os, const My_time& a)
//{
//	os << a.hour << " ; " << a.minutes << std::endl;
//	return os;
//}