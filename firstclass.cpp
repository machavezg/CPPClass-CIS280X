#include <iostream>
using namespace std;
//these three are called function prototypes which call the information from the functions and the
//end of the program, one that multiplies by itself, one that cubes the value, and one that doubles is
int square( int n );
void cube( int &n );
void doubleIt(int *n);

int main() {
   int x, y, z; //varibles are uninitialized. Values are garbage
   //cout << "x is " << x << "y is " << y << "z is " << z << endl;
   
   x = 5;   
   cout << "The value of " << x << " is " << endl;
   x = square(x);
   cout << x << endl; 
   
   y = 5;
   cout << "The square of " << y << " is " << endl;
   cube(y);
   cout << y << endl;

   z = 5;
   cout << "The doubled of " << z << " is " << endl;
   doubleIt(&z);
   cout << z << endl;      
}

int square( int n ){
   return n * n;
}
void cube( int &n) {
   n*=n*=n;
}
void doubleIt(int *n){
   *n = *n *= 2;
}
