#include <iostream>
#include <cmath>
using namespace std;


void check(int n1, double n2, double n3);
void checkd(int n1, double n2=87, double n3=42);
double rightTriangle(double a, double b);
void addn(int n, int &x);

int main()
{
   cout<<"check: ";
   check(1, 3.4, 4.5);
   checkd(0,2,6);
   checkd(0,2);
   checkd(0);
   cout<<"rightTriangle: ";
   if(5==rightTriangle(3,4))
     {
	cout<<"Correct"<<endl;
     }
   
   else
     {
	cout<<"Borked"<<endl;
     }
   
   int num=1;
   int factor=5;
   cout<<"addn before: "<<num<<endl;
   addn(factor, num);
   cout<<"addn after: "<<num<<endl;
   return 0;
}

void check(int n1, double n2, double n3)
{
   cout<<n1<<" "<<n2<<" "<<n3<<endl;   
}

void checkd(int n1, double n2=87, double n3=42)
{
   check(n1,n2,n3);
}

   
double rightTriangle(double a, double b)
{   //c = sqrt(a^2+b^2)
    double c = sqrt(pow(a,2)+pow(b,2));  
    check(a,b,c);
    return c;
}

void addn(int n, int &x)
{
   x+=n;
}
