#include <iostream>
#include <iomanip>

using namespace std;

int main(){
   bool A = true;
   bool B = !A;
   cout<<setiosflags(ios::boolalpha);
   cout<<"A: "<<A<<" B: "<<B<<endl;
   bool C = A && !B;
   cout<<"C: "<<C<<endl;
   cout<<"A!BC: "<<(A && !B && C)<<endl;
   cout<<"ABC: "<<(A && B && C)<<endl;
   cout<<"!(A!BC)"<<!(A && !B && C)<<endl;
   
   A = true;
   B = false;
   cout<<"A+B: "<<(A || B)<<endl;
   cout<<"A+!B: "<<(A || !B)<<endl;
   cout<< "!A + !B: " <<(!A || !B)<<endl;
   cout<<"!(A + B): "<<!(A||B) <<endl;
   cout<<"!(AB): "<<!(A && B) <<endl;
  
   return 0;
}

   
