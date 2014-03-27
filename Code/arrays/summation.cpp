#include<iostream>
using namespace std;

void display(int array[], const int LENGTH);
int summation(int numbers[], const int LENGTH);
bool testSummation();

int main(){

	const int LENGTH = 10;
	int array[LENGTH];
	
	for (int i=0; i<LENGTH; i++){
		cout<<"Enter number: ";
		cin>>array[i];
	}
	
	//call the display function
	display(array, LENGTH);
	
	//call test
	if(!testSummation()){
		cout<<"Code Broken! Must Fix!"<<endl;
		return -1;
	}
	// call summation
	int sum = summation(array, LENGTH);
	cout<<"Answer: "<<sum<<endl;
	if (sum>100){
		cout<<"Large Array"<<endl;
		}
	else{
		cout<<"Small Array"<<endl;
	}
return 0;
}

void display(int array[], const int LENGTH){
	for(int i=0; i< LENGTH; i++){
		cout<<array[i]<<endl;
	}
}

int summation(int numbers[], const int LENGTH){
	int sum = 0; 
	for(int i = 0; i<LENGTH; i++){
			sum+=numbers[i];
	}
	return sum;
}

bool testSummation(){
	const int LEN = 10;
	int test[LEN] = {1,2,3,4,5,6,7,8,9,10};
	int knownSum = 55;
	return (knownSum==summation(test, LEN));
}