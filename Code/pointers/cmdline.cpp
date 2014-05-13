#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]){
	cout<<"Number of cmd line args: "<<argc<<endl;
	for(int i=0; i<argc; i++){
		cout<<argv[i]<<endl;
	}
	
	string arg1 = argv[1];
	int arg2 = atoi(argv[2]);
	string arg3 = argv[3];
	cout<<"aa1 :"<<arg1<<endl;
	cout<<"aa2 :"<<arg2<<endl;
	return 0;
}

