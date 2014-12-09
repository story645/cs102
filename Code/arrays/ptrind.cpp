#include <iostream>

using namespace std;

int main()
{
   long int arr[]={1,2,3,4,5};
        
   for(int i=0; i<5; i++)
     {
        
       cout<<&arr[i]<<" ";
       cout<<(arr+i)<<endl;
    }
   return 0;
}

       
        