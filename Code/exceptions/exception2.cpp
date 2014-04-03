#include <iostream>
#include <cstdlib>

using namespace std;

int factorial(int n);
char next(char input);
int main(){
	
	int n;
	cout<<"Choose n: ";
	cin>>n;
	int fact;
	char input;
	char output;
	cout<<"Choose input: ";
	cin>>input;
	try{
		fact = factorial(n);		
	}catch(int n){
		cout<<"Invalid input to div: "<<n<<endl;
	}
	
	try{
			output = next(input);
	}catch(char i){
		cout<<"Invalid input to next: "<<i<<endl;
	}
	cout<<n<<"!="<<fact<<endl;
	cout<<input<<"->"<<output<<endl;
return 0;	
}

char next(char input){
	/**returns next letter, circular**/
	if (!isalpha(input)){
		throw input;
	}
	switch(input){
		case 'z':
			return 'a';
		case 'Z':
			return 'A';
		default:
			return input+1;
	}
}
	
	
int factorial(int n){
	if (n<0){
		throw n;
	}
	int fact=1;
	for (int i =1; i<=n; i++){
		fact*=i;
	}	
	return fact;
}