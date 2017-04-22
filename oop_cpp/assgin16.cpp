#include <iostream>
#include <cmath>
using namespace std;

double calcDivision(int a, int b) {
   if( b == 0 ) {
      throw "Can't be devided by Zero!";
   }
   return (a/b);
}
double calcRoot(int a){
	if(a==0)
		throw 10001;
	return sqrt(a);
}

int main () {
   int x = 50;
   int y = 0;
   double z = 0;
 
   try {
      z = calcDivision(x, y);
      cout << z << endl;

   }catch (const char* err) {
      cerr << err << endl;
   }
    try {
    z = calcRoot(y);
	cout<< z << endl;
	}catch (int err) {
    cerr << "error code : " << err << endl;
   }

   return 0;
}
