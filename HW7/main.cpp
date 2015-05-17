// Fig. 14.6: fig14_06.cpp
// Reading and printing a sequential file.
#include <iostream>
#include <fstream> // file stream
#include <iomanip>
#include <string>
#include <cstdlib> // exit function prototype
#include <array>
#include <vector>
using namespace std;

void outputLine( const string &, const string & ); // prototype

int main()
{
   // ifstream constructor opens the file          
   ifstream inFName( "fname.txt", ios::in );
   ifstream inLName( "lname.txt", ios::in );
   ofstream outStudents( "students.dat", ios::out | ios::binary);   
   ifstream inStudents( "students.dat", ios::in );   

   srand(time(NULL));
   array <double, 20> array1;
   for( int i = 0; i < array1.size(); i++ ){
        array1[i] = (4.0 - 1.0) * ( (double)rand() / (double)RAND_MAX ) + 1.0;
    }
   array <int, 20> array2;
   for( int i = 0; i < array2.size(); i++ ){
        array2[i] = rand() % 3001 + 1000;
    }
    vector<string> vec;

   // exit program if ifstream could not open file
   if ( !inFName || !inLName ) 
   {
      cerr << "File could not be opened" << endl;
      exit( EXIT_FAILURE );
   } // end if

   string fname; // the account owner's name
   string lname;
   int i = 0;

   cout << left << setw( 13 ) << "First Name:" << "Last Name:" << endl << fixed << showpoint;
   
   while ( inFName >> fname && inLName >> lname){
       outStudents <<  setw(4) << array2[i] << " " << left << setw(10) 
                     << fname << " " << setw(10) << lname << setprecision(3) 
                     << array1[i] << endl;
       vec.push_back(fname);
       string s = to_string(array2[i]);
       vec.push_back(s);
       ++i;
   }
   for(int j = 0; j < vec.size(); ++j){
       cout << vec[j] << " ";
   }

} // end main

// display single record from file
void outputLine( const string &name, const string &last )
{
   cout << left << setw( 13 ) << name << last << endl;
} // end function outputLine
