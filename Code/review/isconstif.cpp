#include <iostream>
#include <cctype>

int main(){
   char input;
   std::cout<<"Enter letter: ";
   std::cin>>input;
   
   if (!isalpha(input)){
      std::cout<<"Error"<<std::endl;
      return 0;
   }
   
   if(input=='a'||
      input=='e'||
      input=='i'||
      input=='o'||
      input=='u'){
        std::cout<<"false"<<std::endl;
     }else
     {
        std::cout<<"true"<<std::endl;
     }
   
        
   
   
   
   return 0;
}
