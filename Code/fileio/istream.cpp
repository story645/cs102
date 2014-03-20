#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	string filename = "input.txt";
	string line;
	int count = 0;
	ifstream inFile;
	inFile.open(filename.c_str());
	if (!inFile){
		cout<<"Error: Can't open "<<filename<<endl;
	}else{	
		while(getline(inFile, line)){
		cout<<line<<endl;
		count++;
		}
		cout<<"# lines:"<<count<<endl;
	}

	inFile.close();

}
