#include <sstream>
#include <iostream>
#include <string>


using namespace std;

int main()
{
   int clsnum=102;
   stringstream cls;
   cls<<"This class is CS"<<clsnum;
   cout<<cls.str()<<endl;
   
   string cb2 = "The value of K is";
   stringstream cb3(cb2);
   cb3<<1.234<<endl;
   cout<<cb3.str();
}
