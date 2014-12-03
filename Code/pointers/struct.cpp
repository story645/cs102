#include <iostream>
#include <cmath>
using namespace std;
struct Point{
	int x;
	int y;
    string color;
};

void display(Point p)
{
   cout<<p.x<<" "<<p.y<<" "<<p.color<<endl;
}

double distance(Point *p1, Point *p2){
	return sqrt((pow(p1->x,2.0)-pow(p2->x, 2.0))+
				(pow(p1->y,2.0) - pow(p2->y, 2.0)));
	}

int main(){
	Point p = {1, 2, "color"};
    display(p);
	Point p2 = {0, 0, "blue"};
    display(p2);
	
	cout<<distance(&p, &p2)<<endl;
	
	Point points[10];
	for (int i=0; i<10; i++){
		Point p = {i*2, i*10};
		points[i] = p;
		cout<<points[i].x<<" "<<points[i].y<<endl;
	}
}	