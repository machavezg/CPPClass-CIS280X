#include <iostream>
#include <vector>
#include <array>
#include <cstdlib>
#include <time.h>
#include <iomanip>

using namespace std;

int double1(int arr);
void double2(int &arr);
void double3(int *vect);
void triple1(int array1[], int size);
void triple2(int &arr);
void triple3(int *vect);

int main() {
    srand(time(NULL));
    int size = 10;
    int array1[size];
    array <int, 10> array2;
    vector<int> array3;
    
    for(int i = 0; i < size; i++){
        array1[i] = rand() % 51 + 50;
        array2[i] = rand() % 51 + 50;
        array3.push_back(rand() % 51 + 50);
    }
//The following code is used to display the first three arrays
    cout << "Arrays after loading them with random numbers in the range [50,100]:"; 
    
    cout << "\n\nArray1:\t";
    for(int i = 0; i < size; i++){
        cout << setw(4) << left << array1[i] << "  ";
    }
    cout << "\nArray2:\t"; 
    for(int i = 0; i < size; i++){
        cout << setw(4) << left << array2[i] << "  "; 
    }
    
    cout << "\nArray3:\t";
    for(int i = 0; i < array3.size(); i++){
        cout << setw(4) << left << array3[i] << "  ";
    }
   
//The following code displays the arrays after they have been doubled
    cout << "\n\nArrays after calling a function element by"
         << " element to double each element in the arrays:";

    cout << "\n\nArray1:\t";
    for(int i = 0; i < size; i++){
        cout << setw(4) << left << double1(array1[i]) << "  ";
    }
   
    cout << "\nArray2:\t";
    for(int a : array2){
        double2(a);
        cout << setw(4) << left << a << "  ";
    }
    
    cout << "\nArray3:\t";
    for(int v : array3){
        double3(&v);
        cout << setw(4) << left << v << "  ";
    }
    
//The following code displays the arrays after they have been tripled
    cout << "\n\nArrays after passing them to a function"
         << " to triple each element in the arrays:";

    cout << "\n\nArray1:\t";
    for(int i = 0; i < size; i++){
        triple1(array1, i);
    }
    for(int i = 0; i < size; i++){
        cout << setw(4) << left << array1[i] << "  ";
    }    
    
    cout << "\nArray2:\t";
    for(int a : array2){
        triple2(a);
        cout << setw(4) << left << a << "  ";
    }
    
    cout << "\nArray3:\t";
    for(int v : array3){
        triple3(&v);
        cout << setw(4) << left << v << "  ";
    }
    
    cout << "\n\n";
    
// To display press any key to continue remove the bottom two lines (lines 96 and 97) and replace with system("pause");
// the bottom two lines work in Max OS while system("pause"); does not, the reason system doesn't work
// is because system is OS specific.
    cout << "Press enter to continue...\n\n";
    cin.get();
}
int double1(int arr){
    return arr * 2;
}
void double2(int &arr){
    arr *= 2;
}
void double3(int *vect){
    *vect *= 2;
}
void triple1(int array1[], int size){
    array1[size] *= 3;
}
void triple2(int &arr){
    arr *= 3;  
}
void triple3(int *vect){
    *vect *= 3;
}
