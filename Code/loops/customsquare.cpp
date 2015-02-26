#include <iostream>

int main()
{
   int width, length;
   std::cout<<"Width of rectange: ";
   std::cin>>width;
   std::cout<<"Length of rectangle: ";
   std::cin>>length;
   for(int l=0; l<length; l++){
      for(int w=0; w<width; w++){
         std::cout<<"*";
      }
      std::cout<<std::endl;
   }
   
   return 0;
}

   