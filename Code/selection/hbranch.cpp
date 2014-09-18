#include <iostream>
using namespace std;

int main()
{
   
   int t;
   int j;
   cout<<"Enter t: ";
   cin>>t;
   if (t<8)
     {
	
	cout<<"hello world"<<endl;
	cout<<"Enter j: ";
	cin>>j;
	if (j==5)
	  {
	     
	    cout<<"today is friday"<<endl;		  
		  
	  }
	else if(j==3)
	  {
	     cout<<"today is tuesday";
	     
	  }
	else
	  {
	     cout<<"today is not friday"<<endl;
	  }
	
	
     }
   else if(t<16)
     {
	cout<<"goodbye world"<<endl;
	cout<<"cs 102"<<endl;
     }
   else
     {
	cout<<"nice to meet ya"<<endl;
     }
   
   
   return 0;
}
