#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   string text;
  
   cout<<"Enter some text: ";
   getline(cin, text);
     
   
   
   string filename;
   cout<<"Enter Filename: "<<endl;
   cin>>filename;
  
   //update
   fstream outFile;
   outFile.open(filename.c_str(), ios::out|ios::app);
   outFile<<text<<endl;
   outFile.close();
   return 0;
}

   
