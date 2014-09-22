#include <iostream>

using namespace std;

int main()
{
   int x, y;
   cout<<"Enter x, y:"<<endl;
   cin>>x>>y;
   
   try
     { 
	
	if(y==0)
	  {
	     throw 0;
	  }
	cout<<"Solution: "<<x/y<<endl;
     }catch(int){
	 cout<<"Divide by 0"<<endl;
     }catch(double){
     }
   
   
   
   return 0;
}
