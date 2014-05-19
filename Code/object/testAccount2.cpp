#include <iostream>
#include "account2.h"

using namespace std;
int main(){
	string n1="0123456789";
	Account a1(n1, 100);
	a1.updateBalance(-200);
	a1-=200;
	cout<<a1.getNum()<<": "<<a1.getBalance()<<endl;
	
	string n2 = "9876543210";
	Account a2(n2);
	a2.updateBalance(-200);
	a2-=-200;
	cout<<a2.getNum()<<": "<<a2.getBalance()<<endl;
	
	string n3 = "1010101010";
	Account a3 = merge(n3, a1, a2);
	cout<<a3.getNum()<<": "<<a3.getBalance()<<endl;
	
	Account accounts[3] ={a1, a2, a3};
	
	Account alist[10];
	for (int i=0; i<10; i++){
		alist[i] = Account("1239874560", 100);
	}
	double sum=0;//ALWAYS SET YOUR ACCUMULATOR
	for (int j=0; j<10; j++){
		cout<<alist[j].getNum()<<" "<<alist[j].getBalance()<<endl;
		sum+=alist[j].getBalance();
	}
	
	cout<<"Balance total: "<<sum<<endl;
	
}