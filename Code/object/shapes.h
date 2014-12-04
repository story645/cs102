#include <iostream>
#include <vector>

#include "point.h"

class Shape{
 protected:
   int NSIDES;
   std::vector <Point> verts;
 public:
   bool isTriangle();
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
 private: 
   Point P1;
   Point P2;
   Point P3;
 public:
   Triangle(Point Pi1, Point Pi2, Point Pi3);
   bool isValid();
   void printVerts();     
};

Triangle::Triangle(Point Pi1, Point Pi2, Point Pi3){
   NSIDES = 3;
   P1 = Pi1;
   P2 = Pi2;
   P3 = Pi3;
      
   verts.push_back(P1);
   verts.push_back(P2);
   verts.push_back(P3);   
}

bool Triangle::isValid(){
 if ((P1==P2) || (P2==P3) || (P3==P1))
     {
        return false;
     }  
   double slope12 = slope(P1, P2);
   double slope23 = slope(P2, P3);
   
   if (slope12 == slope23)
     {
        return false;
     }  
   
   return true;
}

        
        
void Triangle::printVerts(){
   for (int i=0; i<NSIDES; i++){
        verts.at(i).display();
   }
}
