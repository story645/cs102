#include <iostream>
#include <fstream>
#include <string>

int main(){
	string fn ="out.txt";
	ofstream outFile;
	outFile.open(fn.c_str());
	outFile<<"Write to file";
	outFile.close();
return 0;
}
