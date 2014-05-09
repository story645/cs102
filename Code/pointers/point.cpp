#include <iostream>

using namespace std;

int main(){

	int ten = 10;
	int ten2 = ten;
	ten2 = 11;
	cout<<ten<<endl;
	int *tenp;
	cout<<&ten<<endl;
	tenp = &ten;
	*tenp = 11;		
	cout<<*tenp<<endl;	
	cout<<ten<<endl;
}
