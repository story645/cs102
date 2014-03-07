#include<iostream>

/**Converts Fahrenheit to Celsius
 °C  x  9/5 + 32 = °F
(°F  -  32)  x  5/9 = °C
**/

using namespace std;
int main(){
	double F; //declare F and initialize F
	cin>>F;
	double C = (F-32) * (5./9);
	cout<<"5/9: "<<5./9<<endl;
	cout<<"9/5: "<<9/5.<<endl;
	int nine = 9;
	int five = 5;
	cout<<"5/9: "<<five/(nine*1.0)<<endl;
	cout<<"Celsius: "<<C<<endl;
	return 0;
}