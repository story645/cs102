#include <iostream>
#include <vector>
#include "student.h"

using namespace std;

int main()
{
   
   Student Alice("Alice", "Tomatoe", "at@art.com", "2010");
   Student Bob("Bob", "Tomatoe", "tat@abc", "2011");
   cout<<Alice.firstname<<" "<<Alice.id<<endl;
   
   Alice.firstname="Bob";
   cout<<Alice.firstname<<endl;
   
   //Alice.setGPA(100);
   cout<<goodGrade(Alice);
   
   vector <Student> s;
   s.push_back(Alice);
   s.push_back(Bob);
   
   /**
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
   **/
   return 0;
   
}
