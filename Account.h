#pragma once
#ifndef ACC_H
#define ACC_H


class Account
{
	enum { Wielkosc = 24 };
	char * nazwa;
	char * nr_konta;
	double depozyt;
public:
	Account(const char * name = "Brak nazwy", const char *acc_number = "Brak numeru", double deposit=0.0);
	~Account();
	void show();
	void depositing(double value);
	void pay(double value);
	char* adres();
};

#endif // !ACC_H