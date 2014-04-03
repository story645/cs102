#include <iostream>

using namespace std;

double div(double num, double denom);
int main(){

	cout<<"Positive all: "<<div(9,1)<<endl;
	cout<<"Positive num: "<<div(9,-1)<<endl;
	cout<<"Positive denom: "<<div(-9,1)<<endl;
	cout<<"Negative all: "<<div(-9,-1)<<endl;
	try{
		cout<<"Bad: "<<div(9,0)<<endl;
	}catch(double d){
		cout<<"denominator is: "<<d<<endl;
	}
	cout<<"This is supposed to print out"<<endl;
return 0;	
}

double div(double num, double denom){
	if (denom==0){
		throw denom;
	}
	return num/denom;
}