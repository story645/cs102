#include <vector>
#include <cmath>
#include <iostream>

class Point{
	private:
		int x;
		int y;
	public:
		Point();
		Point(int nx, int ny);
		void display();
		int getX();
		int getY();
		void setX(int nx);
		void setY(int ny);
		double distance(Point P);
		Point friend closest(std::vector <Point> pts);
};
	
Point::Point(){}

Point::Point(int nx, int ny){
	x = nx;
	y = ny;
}

void Point::display(){
	std::cout<<"Point("<<x<<",";
	std::cout<<y<<")"<<std::endl;
}

int Point::getX(){return x;}
int Point::getY(){return y;}
void Point::setX(int nx){x=nx;}
void Point::setY(int ny){y=ny;}

double Point::distance(Point P){
	return sqrt(pow(x-P.x,2.0)+
	            pow(y-P.y,2.0));
}
Point closest(std::vector <Point> pts){
	if (pts.empty()){throw -1;}
	Point origin(0,0);
	double min_distance = origin.distance(pts[0]);
	Point min_point = pts[0];
	double distance;
	for (int i=1; i<pts.size(); i++){
		distance = origin.distance(pts[i]);
		if(distance<min_distance){
			min_distance = distance;
			min_point = pts[i];
		}
	}

	return min_point;
}
