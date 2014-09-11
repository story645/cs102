#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double x = 2.33333;
   cout<<setprecision(3)<<x<<endl;
   double a = 182.2;
   cout<<setprecision(2)<<a<<" "<<setprecision(5)<<a<<endl;
   double y = 8;
   double z = 18.9990;
   cout<<setw(10)<<y<<setw(10)<<z<<endl;
   return 0;
}
   
