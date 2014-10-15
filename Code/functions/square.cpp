#include <iostream>
using namespace std;

int square(int x);
double square(double x);

int main()
{
   cout<<square(2)<<endl;
   cout<<square(2.5)<<endl;
   return 0;
}

int square(int x)
{
   return x*x;
}

double square(double x)
{
   return x*x;
}

   
   
