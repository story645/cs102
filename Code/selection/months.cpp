#include <iostream>
using namespace std;

int main(){
   int m;
   cout<<"Enter month: "<<endl;
   cin>>m;
   switch(m){
    case 1:
      cout<<"January"<<endl;
      break;
    case 2:
      cout<<"February"<<endl;
      break;
    case 12:
      cout<<"December"<<endl;
      break;
    default:
      cout<<"invalid"<<endl;
   }
   return 0;
}
