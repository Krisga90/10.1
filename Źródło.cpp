
#include <iostream>
#include "Account.h"


int main()
{
	char * wskaznik;
	{
		Account konto("Marian Toksyczny ", "12345678901234567890123456", 1200.0);
		konto.show();
		konto.depositing(1000.0);
		konto.show();
		konto.pay(1000000);
		konto.show();
		konto.pay(100);
		konto.show();
		//wskaznik = konto.adres();
	}
	//std::cout << wskaznik;
	std::cin.get();
	return 0;
}