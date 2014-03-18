#include <iostream>
#include <cmath>
using namespace std;

int rightTriangle(int a, int b);

int main(){
		cout<<rightTriangle(2,3);
		return 0;
		}
		
int rightTriangle(int a, int b){
	return sqrt(pow(a,2.0)+pow(b,2.0));
}