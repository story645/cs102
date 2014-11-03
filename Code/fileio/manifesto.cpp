#include <iostream>
#include <sstream>

using namespace std;

int main()
{
   
   stringstream text;
   string line;
   cout<<"Enter manifesto: ";
   do
     {
	getline(cin, line);
	text<<" "<<line;
     }
   while(line!="esc");
   cout<<text.str()<<endl;
   return 0;
}

	
