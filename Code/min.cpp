#include <iostream>
using namespace std;
int main(){
	int min, a, b;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	
	if(a<b){
		min=a;
	}else{
		min=b;
	}
	cout<<"min="<<min<<endl;
return 0;
}
