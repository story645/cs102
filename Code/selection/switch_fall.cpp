#include <iostream>

using namespace std;

int main()
{
   char c;
   cout<<"Enter choice: "<<endl;
   cin>>c;
   switch(c)
     {
      case 'A':
	cout<<"A"<<endl;
      case 'B':
	cout<<"B"<<endl;
      case 'C':
	cout<<"C"<<endl;
      default:
	cout<<"Invalid"<<endl;
     }
   return 0;
}

   
	
