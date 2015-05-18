// Fig. 14.6: fig14_06.cpp
// Reading and printing a sequential file.
#include <iostream>
#include <fstream> // file stream
#include <iomanip>
#include <string>
#include <cstdlib> // exit function prototype
#include <vector>
using namespace std;

void checkFiles( ifstream &, ifstream & );
void setGPA(vector<double> &);
void setID(vector<int> &);
void createStudentRecord( vector<int>, ifstream &, ifstream &, vector<double> );
void outputReport( ifstream & );

int main()
{
   string fname; // the account owner's name
   string lname;
   int i = 0;
   // ifstream constructor opens the file          
   ifstream inFName( "fname.txt", ios::in );
   ifstream inLName( "lname.txt", ios::in );
   ifstream inStudents( "students.dat", ios::in );   

   vector <double> array1(20);
   vector<int> array2(20);
   vector<string> vec;
   
   setGPA(array1);
   setID(array2);
   checkFiles(inFName, inLName);
   createStudentRecord( array2, inFName, inLName, array1);
   outputReport(inStudents);

} // end main

//// display single record from file
//void outputLine( const string &name, const string &last )
//{
//   cout << left << setw( 13 ) << name << last << endl;
//} // end function outputLine

//outputs first and last names
//void outputStream( ifstream &name, ifstream &last )
//{
//    name.clear();
//    name.seekg(0, ios::beg);
//    last.clear();
//    last.seekg(0, ios::beg);
//    string fname, lname;
//    while ( name >> fname && last >> lname)
//    {
//        cout << fname << " " << lname << endl;
//    }
//    name.clear();
//    name.seekg(0, ios::beg);
//    last.clear();
//    last.seekg(0, ios::beg);   
//}

void outputReport( ifstream &report )
{
    report.clear();
    report.seekg(0, ios::beg);
    cout << left << setw(5) << "ID" << left << setw(11) << "First" << setw(10) <<  "Last" << "GPA" << endl << fixed << showpoint;
    string id, fname, lname, gpa;
    while ( report >> id >> fname >> lname >> gpa)
    {
        cout <<  setw(4) << id << " " << left << setw(10) 
             << fname << " " << setw(10) << lname << setprecision(3) 
             << gpa << endl;
    }
    report.clear();
    report.seekg(0, ios::beg); 
}

//checks if files are present and can be opened
void checkFiles( ifstream &name, ifstream &last )
{
   // exit program if ifstream could not open file
   if ( !name || !last ) 
   {
      cerr << "File could not be opened" << endl;
      exit( EXIT_FAILURE );
   } // end if
}

//creates a vector for gpa
void setGPA(vector<double> &v)
{
    srand(time(NULL));
    for( int i = 0; i < v.size(); i++ )
        v[i] = (4.0 - 1.0) * ( (double)rand() / (double)RAND_MAX ) + 1.0;
} 

//creates the student id number
void setID(vector<int> &v)
{
    srand(time(NULL));
    for( int i = 0; i < v.size(); i++ )
        v[i] = rand() % 3001 + 1000;
} 

//void displayGPA(vector<double> v)
//{
//    for(int i = 0; i < v.size(); ++i)
//        cout << setw(4) << left << v[i] << "  ";
//    cout << endl;
//}
//
//void displayID(vector<int> v)
//{
//    for(int i = 0; i < v.size(); ++i)
//        cout << setw(4) << left << v[i] << "  ";
//    cout << endl;
//}

void createStudentRecord( vector<int> v1, ifstream &name, ifstream &last, vector<double> v2 )
{
    ofstream outStudents( "students.dat", ios::out | ios::binary);   
    string fname, lname;
    int i = 0;
    while ( name >> fname && last >> lname){
        outStudents <<  setw(4) << v1[i] << " " << left << setw(10) 
                    << fname << " " << setw(10) << lname << setprecision(3) 
                    << v2[i] << endl;
//       string id = to_string(array2[i]);
//       string gpa = to_string(array1[i]);
//       vec.push_back(id);
//       vec.push_back(fname);
//       vec.push_back(lname);
//       vec.push_back(gpa);
       ++i;
   }
}
