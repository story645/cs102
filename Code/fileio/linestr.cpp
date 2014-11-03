#include <iostream>

using namespace std;

int main()
{
   string hi;
   cout<<"enter string: ";
   getline(cin, hi);

   //vowels: A, E, I, O, U
   
   int vowels = 0;
   int conson = 0;
   for (int i=0; i<=hi.length();i++)
     {
        if (!isalpha(hi[i]))
          {continue;}
             
        switch(toupper(hi[i]))
          {
           case 'A':
           case 'E':
           case 'I':
           case 'O':
           case 'U':
             vowels++;
             break;
           default:
             conson++;
          }  
          
        
     }
   cout<<"Vowels: "<<vowels<<" Consonants: "<<conson<<endl;
   return 0;

}
