#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	string filename = "inputword.txt";
	string word;
	ifstream inFile;
   inFile.open(filename.c_str());
	if (!inFile){
		cout<<"Error: Can't open the file named "<<filename<<endl;
	}else{
		while(inFile){
			inFile>>word;
			cout<<word<<endl;
		}
	}

	inFile.close();

}
