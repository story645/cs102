#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	string filename = "data.txt";
	ifstream inFile;
	inFile.open(filename.c_str());
	if (inFile.fail()){
		cout<<"file borked"<<endl;
		//error handling
	}else{
		//process file
		cout<<"file opened"<<endl;
	}
	inFile.close();
}
