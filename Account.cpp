#include "Account.h"
#include<cstring>
#include <iostream>
//#pragma warning(disable : 4996)



Account::Account(const char * name ,const char * acc_number , double deposit)
{

	const int size_n = strlen(name) + 1;
	nazwa = new char[size_n];
	
	strcpy_s(nazwa,size_n, name);
	const int size_a = strlen(acc_number) + 1;
	nr_konta = new char[size_a];
	
	strcpy_s(nr_konta, size_a, acc_number);
	*(nr_konta + Wielkosc - 1) = '\0';
	//strcpy_s(nr_konta,23, acc_number);
	//Account::nr_konta[Wielkosc - 1] = '\0';
	if (deposit < 0)
		depozyt = 0.0;
	else
		depozyt = deposit;
}


void Account::show()
{
	std::cout << "Nazwa uzytkownika: " <<nazwa << "\nnumer konta: " << nr_konta << "\ndepozyt: "
		<< depozyt << "\n";
}
void Account::depositing(double value)
{
	if (value < 0)
		std::cout << "nie mozna zdeponowac wartosci ujemnej\n";
	else
		depozyt += value;
}
void Account::pay(double value)
{
	if (value < 0)
		std::cout << "nie mozna pobrac z konta wartosci ujemnej\n";
	else if (value > depozyt)
		std::cout << "Kwota do wyplacenia jest wieksza niz stan konta\n";
	else
		depozyt -= value;
}

char* Account::adres()
{
	return nazwa;
}

Account::~Account()
{
	delete  nazwa;
	delete nr_konta;
	std::cout << "Koniec";
}
