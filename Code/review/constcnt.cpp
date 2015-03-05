#include <iostream>
#include <cctype>

int main()
{
   int count=0;
   std::string input;
   std::cout<<"Enter string: ";
   std::getline(std::cin, input);
   
   for(int i=0; i<input.length();i++){
      
      if (!isalpha(input.at(i))){
         continue;
      }
        
        
      switch(input.at(i)){
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':
         break;
       default:
         count++;
      }    
   }
   
   std::cout<<"Consonant count: "<<count<<std::endl;
   
   return 0;
}

