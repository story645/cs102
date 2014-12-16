#include <iostream>
#include <sstream>

using namespace std;

int main(){
   string input = "hello";
   string output = "Enter a string: ";
   cout<<output;
   cin>>input;
   output=input;
   cout<<"outout: "<<output<<endl;
   
   string in2;
   stringstream in("hello_world");
   stringstream out;
   
   out<<output;
   in>>input;
   
   cout<<out.str()<<" "<<input<<endl;
   
     
   return 0;
}
