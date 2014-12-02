#include <iostream>
#include <cmath>
class Account{
	private: 
		std::string accountNumber;
		double balance;
		void testValue(double value);
	public:
		Account(std::string an, double b);
		double changeBalance(double value);
		double getBalance();
        double operator<<(std::string accountNum);
		double operator-(double value);
		double operator-=(double value);
		friend bool operator==(Account a1, Account a2);
};

Account::Account(std::string an, double b){
	accountNumber = an;
	balance = b;
}

double Account::getBalance(){
	return balance;
}

void Account::testValue(double value){
		if ((value<0) && (balance<std::abs(value))){
		throw value;
	}
}
	
double Account::changeBalance(double value){
	testValue(value);
	balance += value;
	return balance;
}

double Account::operator-=(double value){
	changeBalance(-1*value);
	return balance;
}

double Account::operator-(double value){
	testValue(value);
	return balance-value;
}

double Account::operator<<(std::string anum)
{
   
}

bool operator==(Account a1, Account a2){
	return ((a1.accountNumber==a2.accountNumber)
			&& (a1.balance==a2.balance));
}