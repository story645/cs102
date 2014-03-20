#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	string filename = "inputtab.txt";
	string name;
	int age;
	ifstream inFile;
	inFile.open(filename.c_str());
	if (!inFile){
		cout<<"Error: Can't open "<<filename<<endl;
	}else{
		while(inFile){
			inFile>>name>>age;
			cout<<name<<" is "<<age+10<<endl;
		}
	}

	inFile.close();

}
