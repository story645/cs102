#include <iostream>
using namespace std;

int f(int value)
{
   if (value<0)
     {
        throw -1;
     }
   return value;
}


int main()
{
   char a = 'a';
   cout<<(int)a<<endl;
   
   cout<<"Hello World!"<<endl;
   try{     
      cout<<f(1)<<endl;
      cout<<f(-1)<<endl;
      cout<<f(2)<<endl;
   }catch(int){
      cout<<"Invalid Input"<<endl;
   }
   
   cout<<"Goodbye World!"<<endl;
   return 0;
}
