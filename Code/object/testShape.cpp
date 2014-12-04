#include <iostream>

#include "shapes.h"

using namespace std;

int main(){
   Point P1(0,0);
   Point P2(1,1);
   Point P3(2,2);
   Point P4(1,5);
   cout<<"Slope: "<<slope(P2, P4)<<endl;
   
   Triangle t1(P1, P2, P3);
   cout<<"Valid "<<t1.isValid()<<endl;
   cout<<"Perimeter: "<<t1.perimeter()<<endl;
   t1.printVerts();
   cout<<::distance(P1, P2)<<" ";
   cout<<::distance(P2, P3)<<" ";
   cout<<::distance(P3, P1)<<endl;
   
   Triangle t2(P2, P3, P4);
   cout<<"Valid "<<t2.isValid()<<endl;
}
