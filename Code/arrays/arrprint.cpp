#include <iostream>
using namespace std;

int main()
{
   int numbers[4]={1,2,3,4};
   cout<<"numbers: "<<numbers<<endl;
   cout<<"numbers: "<<*numbers<<endl;
   cout<<"numbers: "<<*(numbers+1)<<endl;
   cout<<"numbers: "<<*numbers<<endl;
   cout<<"numbers: "<<*numbers<<endl;
   cout<<"numbers: "<<numbers[0]<<numbers[-1]<<endl;
   
   return 0;
}
