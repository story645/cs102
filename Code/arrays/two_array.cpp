#include<iostream>
using namespace std;

int main(){
	const int ROWS = 2;
	const int COLUMNS = 5;
	int numbers[ROWS][COLUMNS]={{2,4,6,8,10},
					            {3,5,7,9,11}};	
	cout<<"Print entire array: "<<endl;
	for(int i=0; i<ROWS; i++){
		for(int j=0; j<COLUMNS; j++){ 
			cout<<"Enter number: ";
			cin>>numbers[i][j];
		}
	cout<<endl;
	}
	cout<<endl;
	
		for(int i=0; i<ROWS; i++){
		for(int j=0; j<COLUMNS; j++){ 
			cout<<numbers[i][j]<<", ";
		}
	cout<<endl;
	}
	cout<<endl;
return 0;
}



