#include <iostream>
#include <vector> //include vector lib

using namespace std;

int main()
{
   vector<int> numbers(10);
   //must use pushback
   //when you don't set size
   numbers[0] = 1;
   cout<<numbers[0]<<endl;
   numbers[1] = 2;
   cout<<numbers[1]<<endl;
   cout<<numbers[2]<<endl;
}

   
