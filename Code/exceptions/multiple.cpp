#include <iostream>
  
using namespace std;   

double division(double a, double b);
void function_that_throws_exception(string c);

int main(int argc, char *argv[]){
 
   try{
      division(2,0);
   }catch(string e){
      cout<<e<<endl;
   }
     
   string c = argv[1];
   
   try{
      function_that_throws_exception(c);
   }catch(int e){
      cout<<"borked integer: "<<e<<endl;
   }catch(double e){
      cout<<"borked double: "<<e<<endl;
   }catch(char e){
      cout<<"borked char: "<<e<<endl;
   }catch(string e){
      cout<<"borked string: "<<e<<endl;
   }
}

void function_that_throws_exception(string c){
   char ch = c.at(0);
   string error = "ehllo";
   switch(ch){
    case 'i':
      throw 5;
    case 'd':
      throw 5.5;
    case 'c':
      throw 'a';
    case 's':
      throw error;
    default:
      cout<<"worked!"<<endl;
   }
}

double division( double a, double b){
   if (b==0){
      string error_message="division by 0";
      throw error_message;
   }
   return a/b;
}