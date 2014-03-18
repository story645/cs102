#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	string filename = "inputnum.txt";
	int number;
	ifstream inFile;
	inFile.open(filename.c_str());
	if (!inFile){
		cout<<"Error: Can't open the file named "<<filename<<endl;
	}else{
		while(inFile){
			inFile>>number;
			cout<<number<<endl;
		}
	}

	inFile.close();

}
