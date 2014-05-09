#include <iostream>
#include "accountPrivate.h"

using namespace std;

int main(){
	string name = "1234";
	Account test(name, 0);
	double newbalance = test.changeBalance(100);
	cout<<newbalance<<endl;
	double nb = test-=10;
	cout<<nb<<endl;
	double temp = test-10;
	cout<<temp<<" "<<test.getBalance()<<endl;
	Account test2(name, 100);
	cout<<"Equal? "<<(test==test2)<<endl;

	Account accountList[2] = {test, test2};
	return 0;
}

