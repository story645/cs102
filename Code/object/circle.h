#include <iostream>
#include <cmath>

#include "point.h"

class Circle{
	private:
		const double PI = 3.14159;
		Point center;
		double radius;
	public:
		Circle(Point c, double r);
		void display();
		double area();
		double operator-(Circle C);
		Circle operator-(Point P);
};

Circle::Circle(Point c, double r){
	center = c;
	radius = r;
}

void Circle::display(){
	std::cout<<"Center: "<<center.getX()<<" "<<center.getY()<<std::endl;
	std::cout<<"Radius: "<<radius<<std::endl;
	
}

double Circle::area(){
	return PI * pow(radius, 2.0);
}

double Circle::operator-(Circle C){
		return area()-C.area();
}

Circle Circle::operator-(Point P){
	Point shift(center.getX()-P.getX(), 
				center.getY()-P.getY());
	return Circle(shift, radius);
}