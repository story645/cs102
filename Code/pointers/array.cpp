#include <iostream>

using namespace std;

int main(){

	
	int numbers[5] = {10,20,30,40,50};
	int *ptNum;
	ptNum = numbers;
	for(int i=0; i<5; i++){
cout<<*ptNum++<<endl;
				}
	cout<<*numbers<<endl;
}
