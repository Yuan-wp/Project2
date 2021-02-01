//#include"stone.h"
//void Stone::set_st()
//{
//	stone = int(pound) / per;
//	pds_left = int(pound) % per + pound - int(pound);
//}
//void Stone::set_pd()
//{
//	pound = stone * per + pds_left;
//}
//void Stone::set_pdint()
//{
//	pound_int = int(pound);
//}
//Stone::Stone(double lbs, Model form)
//{
//	model = form;
//	pound = lbs;
//	set_st();
//	set_pdint();
//}
//Stone::Stone(int stn, double a, Model form)
//{
//	model = form;
//	if (form == PD)
//	{
//		stone = stn;
//		pds_left = a;jiu
//		set_pd();
//		set_pdint();
//	}
//	else if (form == PDINT)
//	{
//		pound = lbs;
//		set_st();
//		set_pdint();
//	}
//	else if (form == ST)
//	{
//		pound = lbs;
//		set_st();
//		set_pdint();
//	}
//}
//~Stone();
//Stone();
//Stone& operator+(Stone& s);
//Stone& operator-(Stone& s);
//Stone& operator*(double n);
//friend Stone& operator*(double n, Stone& s) { return s * n; };
//friend std::ostream& operator<<(std::ostream& os, const Stone& a);