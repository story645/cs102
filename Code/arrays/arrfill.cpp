#include <iostream>
using namespace std;
template <class T>
void print(T ar[], int l);
template <class T>
void fill(T arrName[], int length);

int main()
{
   
   double arr[5]=
     {'a','b'};
	
   cout<<"Unfilled: "<<endl;
   print(arr, 5);
   
   fill(arr, 5);
   
   cout<<"Filled: "<<endl;
   print(arr,5);
   
}
template <class T>
void print(T ar[], int l)
{
   for (int i=0; i<l; i++)
     {
	
	cout<<ar[i]<<endl;
     }
}

   
   
template <class T>
void fill(T arrName[], int length)
{
   for (int i=0; i<length; i++)
     {
	cout<<"Enter val: ";
	cin>>arrName[i];
     }
}

   
