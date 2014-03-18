#include <iostream>
using namespace std;

double sum(double arr[], const 
int LENGTH);

int main(){
	const int LEN = 8;
	double arr[LEN] = 
{0,1,1,2,3,5,8,13};
	cout<<sum(arr, LEN);
	return 0;
}

double sum(double arr[], const 
int LENGTH){
	return arr[LENGTH-1];
}
