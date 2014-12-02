#include <iostream>
#include <vector>

#include "point.h"

class Shape{
 protected:
   static const int NSIDES;
   std::vector <Point> verts;
   //Point verts[NSIDES];
 public:
   double perimeter();
};

double Shape::perimeter()
{  
   std::cout<<"HI I'M HERE"<<std::endl;
   double perim=::distance(verts[NSIDES-1], verts[0]);
   std::cout<<"NSIDES: "<<NSIDES<<std::endl;
   for(int i=0; i<NSIDES-1; i++)
     {
        perim+=::distance(verts[i], verts[i+1]);
        std::cout<<perim<<std::endl;
     }
   
   return perim;
}


class Triangle:public Shape{  
 private:
   static const int NSIDES=3;
   std::vector <Point> verts(NSIDES);
 public:
   Triangle(Point P1, Point P2, Point P3);
   void printVerts();     
};

Triangle::Triangle(Point P1, Point P2, Point P3){
   verts[0] = P1;
   verts[1] = P2;
   verts[2] = P3;
}

void Triangle::printVerts(){
   for (int i=0; i<NSIDES; i++){
        verts[i].display();
   }
}
