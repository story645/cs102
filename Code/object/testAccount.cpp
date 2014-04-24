#include <iostream>
#include "account.h"

using namespace std;

int main(){
	string name = "hannah";
	string account= "1234";
	Account test(name, account,100);
	cout<<test.ownersName<<" "<<test.getBalance()<<endl;
	
	test.ownersName = "bcd";
	test.changeBalance(-100);
	cout<<test.ownersName<<" "<<test.getBalance()<<endl;
	Account test2(name, account,200);
	cout<<(test<test2)<<endl;
}