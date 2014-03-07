#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
	int guess;
	const int MAXNUM = 100;

	/* initialize random seed: */
	srand (time(NULL));

	/* generate random number between 0 and MAXNUM */
	int rnumber = rand() % MAXNUM;

	do{
		cout<<"What's your guess? ";
		cin>>guess;
		if (guess>rnumber){
			cout<<"Too high, try again."<<endl;
		}else if(guess<rnumber){
			cout<<"Too low, try again."<<endl;
		}else{
			cout<<"Correct!"<<endl;
		}
	}while(guess!=rnumber);
	
	return 0;
}