#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;
/**PGM plain format spec
magic number - identifies file type 'P2' for plain
width height
max gray value
pixel values [rows by columns]
**/

void writeHeader(ofstream &file, string magic, int width, int height, int maxval);
void drawCircle(ofstream &file, int radius, int width, int height, int maxval);
bool inCircle(int x, int h, int y, int k, int radius);

int main(){
	cout<<"Hello world!"<<endl;
	string filename = "black_test.pgm";
	ofstream streamwriter;
	streamwriter.open(filename.c_str());
	if (!streamwriter){
		cout<<"error opening"<<endl;
		return -1;
	}
	int height = 250;
	int width = 250;
	int maxval = 1;
	writeHeader(streamwriter, "P2", height, width, maxval);
	drawCircle(streamwriter, 50, height, width, maxval);
	streamwriter.close();
	
	return 0;
}

void writeHeader(ofstream &file, string magic, int width, int height, int maxval=255){
	file<<magic<<endl;
	file<<width<<" "<<height<<endl;
	file<<maxval<<endl;
}

void drawCircle(ofstream &file, int radius, int width, int height, int maxval){
	cout<<"drawing circle";
	for (int r=0; r<height; r++){
		for (int c=0; c<width; c++){
			if(inCircle(r, width/2, c, height/2, radius)){
				cout<<r<<","<<c<<" ";
				file<<maxval;
			}else{
				file<<0;
			}
			file<<" ";
		}
		file<<endl;
	}
	
}

bool inCircle(int x, int h, int y, int k, int radius){
	/** general formula for circle is:
		On the coordinate plane, the formula becomes (x−h)2+(y−k)2=r2
		h and k are the x and y coordinates of the center of the circle 
	**/
	return ((pow(x-h,2.0) + pow(y-k,2.0)) < pow(radius, 2.0));
}