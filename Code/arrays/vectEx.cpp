#include <iostream>
#include <vector> //include vector lib

using namespace std;

int main()
{
   vector<int> numbers;
   //must use pushback
   //when you don't set size
   numbers.push_back(1);
   cout<<numbers[0]<<endl;
   numbers.push_back(2);
   cout<<numbers[1]<<endl;
}

   
