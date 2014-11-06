#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
   string filename = "starwars.txt";
   
   ifstream starFile;
   starFile.open(filename.c_str());
   
   if (!starFile)
     {
        cout<<"Error: "<<filename<<endl;
        return 0;
     }
   
   string line;
   int wordcount = 0;
   int sentences = 0;
   //.,!, ? 
   while (starFile>>line){
      wordcount++;
      
      if (line.find('.')!=string::npos
          || line.find('?')!=string::npos
          || line.find('!')!=string::npos)
        {
          sentences++;
        }
      
   }
   
   starFile.close();
   
   
   ofstream outFile;
   outFile.open("word_count.txt");
   outFile<<"Wordcount: "<<wordcount<<endl;
   outFile<<"Sentences: "<<sentences<<endl;
   outFile.close();
   return 0;
 }
   
