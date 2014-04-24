#include <string>
#include <cmath>

class Account{
	public:
		std::string ownersName;
		std::string accountNumber;
		int history[10];
		int index = 0;
		Account(std::string oN, std::string aN, double b=0);
		void Account::changeBalance(double value);
		double Account::getBalance();
		bool operator<(Account account);
		bool operator==(Account account);
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


	
				