#include <iostream>
#include <vector>

#include "point.h"

class Shape{
 protected:
   int NSIDES;
   std::vector <Point> verts;
 public:
   double perimeter();
};

double Shape::perimeter()
{  
   double perim=::distance(verts[NSIDES-1], verts[0]);
   for(int i=0; i<NSIDES-1; i++)
     {
        perim+=::distance(verts[i], verts[i+1]);
     }
   return perim;
}


class Triangle:public Shape{  
 public:
   Triangle(Point P1, Point P2, Point P3);
   void printVerts();     
};

Triangle::Triangle(Point P1, Point P2, Point P3){
   NSIDES = 3;
   verts.push_back(P1);
   verts.push_back(P2);
   verts.push_back(P3);   
}

void Triangle::printVerts(){
   for (int i=0; i<NSIDES; i++){
        verts.at(i).display();
   }
}
