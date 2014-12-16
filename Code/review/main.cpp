#include <iostream>
#include "point.h"

using namespace std;


int main(){
	Point p1(2.5,1.2);
	p1.display();
	int x = p1.getX();
	int y = p1.getY();
	cout<<x<<" "<<y<<endl;
	Point P=p1;
	P.setY(2);
	p1.display();
	P.display();
	vector <Point> pts;
	pts.push_back(Point(2,3));
	pts.push_back(Point(2,-3));
	pts.push_back(Point(4,5));
	Point pt = closest(pts);
	cout<<"closest: ";
	pt.display();
	
	vector <Point> pps;
	try{
		closest(pps);
	}catch(...){
		cout<<"Error!"<<endl;
	}
}