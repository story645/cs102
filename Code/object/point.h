#include <string>

class Point{
	public:
		double x;
		double y;
		std::string color;
		Point(double x0, double y0, std::string c0);
		void updatePos(double nx, double ny);
		bool equal(Point P);
};

Point::Point(double x0, double y0, std::string c0){
    x = x0;
    y = y0;
    color = c0;
}

void Point::updatePos(double nx, double ny){
	x = nx;
	y = ny;
}

bool Point::equal(Point P){
	return ((x==P.x)&&(y==P.y));
}