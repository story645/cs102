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

template <class T>
  void f(T t){
    //stops program cold
     throw 101;
  }
