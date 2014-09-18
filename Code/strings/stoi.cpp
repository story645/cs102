#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;
int main()
{
   int j;
   string abc = "1235";
   //cout<<atoi(*abc)<<endl;
   for(int i=0; i<abc.length(); i++)
     {
	j+=(abc.at(i)-48)*pow(10,abc.length()-i-1);
     }
   cout<<j<<endl;
   cout<<stoi(abc)<<endl;
}
