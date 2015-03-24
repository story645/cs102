#include <iostream>
using namespace std;

int addnv(int x, int n=0);
void addnr(int &x, int n=0);

int main(){
	int a=5;
	cout<<"Pass-by-value"<<endl;
	cout<<"a="<<a<<endl;
    //cout<<addnv(a)<<endl;
	cout<<"a="<<a<<endl;
	addnv(a,10);
   //cout<<addnv(a, 10)<<endl;
	cout<<"a="<<a<<endl;
	addnv(a,15);
    //cout<<addnv(a, 15)<<endl;
	cout<<"a="<<a<<endl;
	cout<<"Pass-by-reference"<<endl;
	cout<<"a="<<a<<endl;
	addnr(a);
	cout<<"a="<<a<<endl;
	addnr(a, 10);
	cout<<"a="<<a<<endl;
	addnr(a, 15);
	cout<<"a="<<a<<endl;
	
	return 0;
}

//adds n to x, pass by value
int addnv(int x, int n=0){
	x= x+n;
    return x;
}

//adds n to x, pass by reference
void addnr(int &x, int n=0){
	x = x+n;
}
