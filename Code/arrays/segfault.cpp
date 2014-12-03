#include <iostream>
#include <vector>


using namespace std;

int main()
{
   vector <int> vect;
   vect.push_back(1);
   cout<<vect[0]<<endl;
   cout<<vect[2]<<endl;
   delete &vect;
   cout<<vect[0]<<endl;
}
