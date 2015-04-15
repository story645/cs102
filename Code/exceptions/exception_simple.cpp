#include <iostream>

template <class T>
  void f(T t);


int main(){
   try{
      f();
   }catch(int){
      std::cout<<"Error"<<std::endl;
   }
}

template <class t>
  void f(T t){
     throw 101;
  }
