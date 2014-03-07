#include <iostream>
using namespace std;

int main(){
	int y;
	for (int x=1; x<=5; x++){
		for(int z=2; z<=6; z++){
			y=(x*z)/(1.0*(x-z));
			cout<<"f("<<x<<","<<z<<")=";
			if (x==z){
				cout<<"NaN"<<endl;
			}else{
				cout<<y<<endl;
			}
		}
	}
	return 0;
}