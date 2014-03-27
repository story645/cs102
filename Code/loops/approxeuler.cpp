#include<iostream>
using namespace std;



int main(){
	int x = 1;
	int n = 10;
	double e = 1;
	int fac;
	int pow;
	//big sum
	for (int i=1; i<=n; i++){
		//factorial sum
		fac = 1;
		for (int j=1; j<=i; j++){
			fac*=j;
		}
		//powersum
		pow = 1;
		for (int k=1; k<=i; k++){
			pow*=x;
		}
		e+=(1.0*pow/fac);
	}
	cout<<e<<endl;
return 0;
}
