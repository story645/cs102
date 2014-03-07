#include  <iostream>
using namespace std;

int main(){
	int n;
	cout<<"N? "<<endl;
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout<<j*i<<" ";
		}
		cout<<endl;
	}
	return 0;
}