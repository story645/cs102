#include <iostream>

using namespace std;

void check(int x, double y, double z);

int main(){
	check(9, 10.0, 12.0);
	return 0;
}

void check(int x, double y, double z){
	cout<<"x="<<x<<" y="<<y<<" z="<<z<<endl;
	return ;
	}