#include <iostream>

template <class T>
T division(T a, T b);

int main(){
   double x, y, z;
   std::cout<<"Enter x: ";
   std::cin>>x;
   std::cout<<"Enter y: ";
   std::cin>>y;
   try{
      z = division(x,y);
      std::cout<<x<<"/"<<y<<"="<<z
            <<std::endl;
   }catch(...){
      std::cout<<"Divide By Zero: ";
      //<<e<<std::endl;
   }
      
   return 0;
}

template <class T>
T division(T a, T b){
   if (b==0){throw b;}
   return a/b;
}
