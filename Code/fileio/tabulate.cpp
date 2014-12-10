/*
1. read in list
2. compute sum
3. save sum out
*/

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
vector <int> file2vector(string filename);
double sum(vector <int> vect);
void save(string filename, double sum);

int main(){
	string fn = "data.txt";
	vector <int> data = file2vector(fn);
	
	for(int i=0; i<data.size(); i++){
		cout<<data[i]<<endl;
	}
	
	double result = sum(data);
	cout<<result<<endl;
	
	string fn2 = "sum.txt";
	save(fn2, result);
}	

vector <int> file2vector(string filename){
	ifstream inFile;
	inFile.open(filename.c_str());
	
	if (inFile.fail()){
		throw -1;
	}
	int line;
	vector <int> vect;
	while(inFile>>line){
		vect.push_back(line);
	}
	inFile.close();
	return vect;
}

double sum(vector <int> vect){
	double result = 0;
	for(int j=0; j<vect.size(); j++){
		result+=vect[j];
	}	
	return result;
}

void save(string filename, double sum){
	ofstream outFile;
	outFile.open(filename.c_str());
	outFile<<"sum: "<<sum<<endl;
	outFile.close();
}