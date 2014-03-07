#include  <iostream>
using namespace std;

int main(){
	int n;
	int x=1;
	cout<<"N? "<<endl;
	cin>>n;
	for(int i=n; i>=1; i--){
			x*=i;
		}
	cout<<x<<endl;
	return 0;
}