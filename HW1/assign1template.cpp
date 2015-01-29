#include <iostream>
#include <ostream>
#include <vector>
#include <array>

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
    array <int, 10> array2;
    int array1[size];
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
        cout << array1[i] << "\t";
    }
    cout << "\n\nArray2:\t"; 
    for(int i = 0; i < size; i++){
        cout << array2[i] << "\t"; 
    }
    
    cout << "\n\nArray3:\t";
    for(int i = 0; i < array3.size(); i++){
        cout << array3[i] << "\t";
    }
   
//The following code displays the arrays after they have been doubled
    cout << "\n\nArrays after calling a function element by"
         << " element to double each element in the arrays:";

    cout << "\n\nArray1:\t";
    for(int i = 0; i < size; i++){
        cout << double1(array1[i]) << "\t";
    }
   
    cout << "\n\nArray2:\t";
    for(int a : array2){
        double2(a);
        cout << a << "\t";
    }
    
//    cout << "\n\nArray2:\t";
//    for(int i = 0; i < 10; i++){
//        double2(array2[i]);
//    }
//    for(int i = 0; i < size; i++){
//        cout << array2[i] << "\t"; 
//    }
    
    cout << "\n\nArray3:\t";
    for(int v : array3){
        double3(&v);
        cout << v << "\t";
    }
    
//    cout << "\n\nArray3:\t";    
//    for(int i = 0; i < size; i++){
//        double3(&array3[i]);
//    }
//    for(int i = 0; i < size; i++){
//        cout << array3[i] << "\t"; 
//    }
    
    cout << "\n\nArrays after calling a function element by"
         << " element to triple each element in the arrays:";

    cout << "\n\nArray1:\t";
    for(int i = 0; i < size; i++){
        triple1(array1, i);
    }
    for(int i = 0; i < size; i++){
        cout << array1[i] << "\t";
    }    
    
    cout << "\n\nArray2:\t";
    for(int a : array2){
        triple2(a);
        cout << a << "\t";
    }
        
//    cout << "\n\nArray2:\t";
//    for(int i = 0; i < 10; i++){
//        triple2(array2[i]);
//    }
//    for(int i = 0; i < size; i++){
//        cout << array2[i] << "\t"; 
//    }
    
     cout << "\n\nArray3:\t";
    for(int v : array3){
        triple3(&v);
        cout << v << "\t";
    }
    
//        cout << "\n\nArray3:\t";    
//    for(int i = 0; i < size; i++){
//        triple3(&array3[i]);
//    }
//    for(int i = 0; i < size; i++){
//        cout << array3[i] << "\t"; 
//    }
}
int double1(int arr){
    return arr * 2;
}
void double2(int &arr){
    arr *= 2;
}
// Reference vector modification
// void double3(vector<int> &vect){
//    for(int i = 0; i < vect.size(); ++i)
//       vect[i] *= 2;
// }
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
