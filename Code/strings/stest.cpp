#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

bool alphastr(string hello);
int main(){
	string hello = "Hello world!";
	cout<<hello<<hello.length()<<endl;
	
	string hello2 = hello + " "+ hello;
	cout<<hello2<<" "<<hello2.length()<<endl;
	cout<<"first letter: "<<hello.at(0)<<endl;

	int j=0;
	while(isalpha(hello.at(j))){
		j++;
	}
		
	cout<<"first non alpha: "<<hello.at(j)<<endl;
	cout<<"All alphanumeric: "<<hello<<" "<<alphastr(hello)<<endl;
	cout<<"All alphanumeric: "<<hello2<<" "<<alphastr(hello2)<<endl;
	
	string hello3 = "hello";
	cout<<"All alphanumeric: "<<hello3<<" "<<alphastr(hello3)<<endl;
	
return 0;
}

bool alphastr(string hello){
	bool all_alpha = true;
	for (int i =0; i<hello.length(); i++){
		//cout<<hello.at(i)<<endl;
		if (!isalpha(hello.at(i))){
			all_alpha=false;
			break;
		}
	}
	return all_alpha;
}