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
   
   switch(input)
     {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
        std::cout<<"False"<<std::endl;
        break;
      default:
        std::cout<<"true"<<std::endl;
     }   
   
   return 0;
}
