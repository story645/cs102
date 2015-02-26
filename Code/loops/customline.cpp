#include <iostream>

int main()
{
   int width;
   std::cout<<"Width of line: ";
   std::cin>>width;
   for(int w=0; w<width; w++)
     {
        std::cout<<"*";
     }
   
   std::cout<<std::endl;     
   return 0;
}

   