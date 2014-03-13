#include <iostream>
using namespace std;

char max(char name[], const int length);
char min(char name[], const int length);

int main(){
	const int LENGTH = 8;
	char lastname[LENGTH] = {'a','i','z','e','n','m','a','n'};
	
	for (int i=0; i<LENGTH; i++){
		cout<<lastname[i];
	}
	cout<<endl;
	cout<<"Max letter: "<<max(lastname, LENGTH)<<endl;
	cout<<"Min letter: "<<min(lastname, LENGTH)<<endl;
	return 0;
}

char max(char name[], const int length){
	char maxL = name[0];
	for(int i=0; i<length; i++){
		if (maxL<name[i]){
			maxL=name[i];
		}
	}
	return maxL;
}

char min(char name[], const int length){
	char minL = name[0];
	for(int i=0; i<length; i++){
		if (minL>name[i]){
			minL=name[i];
		}
	}
	return minL;
}