#include <iostream>
using namespace std;

int a;

template <class T>
  T square(T x){
    a-=1;
    cout<<"T: "<<a<<endl;
    return x*x;
}

template <class T1, class T2>
  void square(T1 x, T2 &y)
{
   a-=2;
   cout<<"T1: "<<a<<endl;
   y=x*x;
}


int main()
{
   a = 1;
   cout<<square(2)<<endl;
   a+=2;
   cout<<square(2.5)<<endl;
   a+=3;
   cout<<square('!')<<endl;
   int v;
   a+=10;
   square(2.5,v);
   
   cout<<"2.5 "<<v<<endl;
   double w;
   a+=11;
   square(2.5,w);
   cout<<"2.5 "<<w<<endl;
   double y = 5;
   int x;
   a+=10;
   square(y,x);
   cout<<"5: "<<x<<endl;
   return 0;
}

   
   
