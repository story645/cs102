#include <string>
#include <cmath>

class Account{
	public:
		std::string ownersName;
		std::string accountNumber;
		int history[10];
		int index = 0;
		Account(std::string oN, std::string aN, double b);
		void changeBalance(double value);
		double getBalance();
                double operator-(double value);
		bool operator<(Account account);
		friend bool operator==(Account a1, Account A2);
	
	private:
		double balance;
	};
	
Account::Account(std::string oN, std::string aN, double b=0){
		ownersName = oN;
		accountNumber = aN;
		balance = b;
		history[index] = balance;
		index++;
}

double Account::operator-(double value){
     changeBalance(-1*value);
     return balance;
}
			
bool Account::operator<(Account account){
	return balance<account.balance;
}

void Account::changeBalance(double value){
	if ((value<0) && (balance<std::abs(value))){
			throw value;
	}
	
	balance+=value;
	}
	
double Account::getBalance(){
	return balance;
}


bool operator==(Account a1, Account a2){
	return ((a1.accountNumber == a2.accountNumber)&&
                 (a1.balance == a2.balance));
}	
				
