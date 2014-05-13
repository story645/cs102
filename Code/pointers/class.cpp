#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
class Point{
	public:
		int x;
		int y;
		Point(){};
		Point(int nx, int ny);
		void display();
};
Point::Point(int nx, int ny){
	x = nx;
	y = ny;
}
void Point::display(){
	cout<<x<<" "<<y<<endl;
}



double distance(Point *p1, Point *p2){
	return sqrt((pow(p1->x,2.0)-pow(p2->x, 2.0))+
				(pow(p1->y,2.0) - pow(p2->y, 2.0)));
	}
	
void change(Point p1){
	p1.x*=10;
	cout<<p1.x<<endl;
	p1.y*=10;
	cout<<p1.y<<endl;
	
}
int main(){
	Point p(1, 2);
	cout<<"b: "<<p.x<<" "<<p.y<<endl;
	change(p);
	cout<<"a: "<<p.x<<" "<<p.y<<endl;
	
	Point p2(0, 0);
	cout<<p2.x<<" "<<p2.y<<endl;
	
	cout<<distance(&p, &p2)<<endl;
	
	Point points[10];
	for (int i=0; i<10; i++){
		Point p(i*2, i*10);
		points[i] = p;
		points[i].display();
	}
}	