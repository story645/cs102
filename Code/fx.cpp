#include <iostream>
#include <cmath>
using namespace std;

//f(x) computes x*2
int f(int x=0);
double f(double x, double y);

int main(){
	double a;
	cout<<"f(0)="<<f(9)<<endl;
	cout<<"Enter x: ";
	cin>>a;
	pow(2,2);
	int z = f(a);
	cout<<f(1,2);
	cout<<"f(x)="<<z<<endl;
	return 0;
	}
	
//computes x*2
int f(int x=0){
	int y=x*x;
	return y;

}

double f(double x, double y){
	return x*y;
}
