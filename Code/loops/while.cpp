#include <iostream>
using namespace std;
int main(){
	int min, n;
	cout<<"Enter n: ";
	cin>>n;
	min = n;
	while(n>100){
		if(min>n){
			min=n;
		}
		cout<<"Enter n: ";
		cin>>n;
	}
	cout<<"min="<<min<<endl;
return 0;
}
