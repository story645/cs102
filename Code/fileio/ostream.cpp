#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(){
	string filename = "outfile.txt";
	ofstream outFile;
	outFile.open(filename.c_str());
	outFile<<"This is text";
	outFile.close();
	return 0;
}
	
