#include <iostream>
#include <vector> //include vector lib

using namespace std;

int main()
{
   vector<int> numbers(10,2);
   //must use pushback
   //when you don't set size
   cout<<numbers[1]<<endl;
   numbers[1] = 4;
   cout<<numbers[1]<<endl;
   
   vector <string> students(20,"anonymouse");
   students.at(10) = "hannah";
   cout<<students[10]<<endl;
   students.at(40) = "hannah";
   //cout<<students[40]<<endl;
}

   
