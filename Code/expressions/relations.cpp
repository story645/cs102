#include <iostream>
using namespace std;
int main(){
	int distance;
	cout<<"distance: ";
	cin>>distance;
	bool equal = (distance==30);
	cout<<"Distance==30? "<<equal<<endl;
	double length;
	cout<<"length: ";
	cin>>length;
	bool size = ((length>2) && (length<3));
	cout<<"Length: "<<size<<endl;
	return 0;
	
}