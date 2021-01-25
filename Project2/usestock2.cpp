//#include<iostream>
//#include"stock10.h"
//int main()
//{
//	{
//		using std::cout;
//		cout << "Using construcors to create new objects\n";
//		Stock stock1("NanoSmart", 12, 20.0);
//		stock1.show();
//		Stock stock2 = Stock("Boffo Objects", 2, 2.0);
//		stock2.show();
//		cout << "Asign stock1 to stock2;\n";
//		stock2 = stock1;
//		stock1.show();
//		stock2.show();
//		cout << "reset object\n";
//		stock1 = Stock("Nifty Foods", 10, 50.0);
//		stock1.show();
//		Stock stock3 = { "yuanwp",100,52 };
//		stock3.show();
//		cout << "Done\n";
//	}
//	return 0;
//
//}

//#include<iostream>
//#include"stock10.h"
//const int STKS = 4;
//int main()
//{
//	{
//		using std::cout;
//		Stock stocks[STKS] = {
//			Stock("NanoSmart",12,20.0),
//			Stock("Boffo Objects",200,2.0),
//			Stock("Monolithic Obelisks",130,3.25),
//			Stock("Fleep Enterprises",60,6.5)
//
//		};
//		cout << "Stock holding:\mn";
//		int st;
//		for (st = 0; st < STKS; st++)
//			stocks[st].show();
//		//set pointer to first element
//		const Stock* top = &stocks[0];
//		for (st = 1; st < STKS; st++)
//			top=&top->topval(stocks[st]);
//		top->show();
//
//	}
//	return 0;
//
//}
