#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(){
	string filename = "inputtab.txt";
	string name;
	int age;
        vector <string> names;
        vector <int> ages;
	ifstream inFile;
   inFile.open(filename.c_str());
	if (!inFile){
		cout<<"Error: Can't open "<<filename<<endl;
	}else{
		while(inFile>>name>>age){
           names.push_back(name);
           ages.push_back(age);
		         //cout<<name<<" is "<<age+10<<endl;
		}
	}

	inFile.close();
   
        for (int i=0;i<names.size(); i++){
	cout<<names[i]<<" "<<ages[i]<<endl;
     }

}
