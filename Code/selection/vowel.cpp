#include <iostream>

using namespace std;

int main()
{
   char letter;
   cout<<"Enter letter: "<<endl;
   cin>>letter;
   
   if((letter>='A' && letter<='Z')
      || (letter>='a' && letter<='z'))
     {
	//cout<<"valid input"<<endl;
	
	//vowels: AEIOU
	switch(letter)
	  {
	   case 'A':
	   case 'a':
	   case 'E':
	   case 'e':
	   case 'I':
	   case 'i':
	   case 'O':
	   case 'o':
	   case 'U':
	   case 'u':
	     cout<<"This is a vowel"<<endl;
	     break;
	   default:
	     cout<<"This is a consonant"<<endl;
	  }	
     }
   else
     {
	cout<<"Error Not A Letter"<<endl;
     }
   
   return 0;
}

   
