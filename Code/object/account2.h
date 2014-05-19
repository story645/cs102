#include <iostream>
class  Account{
	private:
		std::string anum;
		double balance;
	public:
		Account(){};
		Account(std::string an);
		Account(std::string an, double bal);
		std::string getNum(){return anum;}
		double getBalance(){return balance;}
		double operator-=(double amount);
		double updateBalance(double amount);
		friend Account merge(std::string num, Account A, Account B);
};
		
Account::Account(std::string an){
		anum = an;
		balance = 0;

}

Account::Account(std::string an, double bal){
	anum=an;
	balance = bal;
}
		
double Account::updateBalance(double amount){
	balance += amount;
	return balance;
}

double Account::operator-=(double amount){
	balance-=amount;
	return balance;
}


Account merge(std::string num, Account A, Account B){
	return Account(num, A.balance+B.balance);
}