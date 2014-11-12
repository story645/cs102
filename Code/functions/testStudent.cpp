#include <iostream>

#include "student.h"

using namespace std;

int main()
{
   
   Student Alice("Alice", "Tomatoe", "at@art.com", "2010");
   cout<<Alice.firstname<<" "<<Alice.id<<endl;
   
   Course cs("CS102", "K0", 3);
   Course math("Calc203", "AB", 4);
   Course english("FIQWS", "CD", 4);
   
   Alice.addCourse(cs);
   Alice.addCourse(math);
   Alice.addCourse(english);
   
   for (int i=0; i<Alice.courses.size();i++)
     {
        cout<<Alice.courses[i].name<<endl;
     }
   
   return 0;
   
}
