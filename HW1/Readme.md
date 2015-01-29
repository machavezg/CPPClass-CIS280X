CIS 280X - OOP in C++

Assignment 01

This assignment will give you practice using random numbers, functions, C-style arrays, array and vector classes, and different call passing mechanisms (by value, by reference using a reference, by reference using a pointer). Please name your program assign1.cpp.

Write a C++ program that will create 3 collections (arrays). Each array will store a random number in the range of  50 - 100. Use  a loop to load each array with random numbers.

a c-style array	use the name array1  
an array class object	use the name array2
a vector class object	use the name array3
Create 3 functions that will take a single integer and double it. The doubled value will be stored in the array being processed. Use loops to call the functions to double the values in the array elements.

1.  The first  function will have a return type of int  and use call-by-value. 
use for array1      function double1
2.  The second function will have a return type of void and use call-be-reference using a reference.
use for array2      function double2
3.  The third  function will have a return type of void and use call-by-reference using a pointer.
use for array3      function double3
Create 3 functions that will take an integer array and double every element in the array. Use loops in the functions that are called to triple the values in the array elements.

1.  The first  function will have a return type of void and use call-by-reference using a c-style array.         
     Use [ ] in  the function header: void triple1( int array1[ ], int size )   

use for array1      function triple1
2.  The second function will have a return type of void and use call-be-reference using a reference
use for array2      function triple2
3.  The third  function will have a return type of void and use call-by-reference using a pointer.
use for array3      function triple3
    
Here is the sequence you should follow:
  
  1.  Create the 3 arrays. Print out each array on a single line nicely formatted   [hint - use the setw() stream manipulator]
  2.  Double the elements in the arrays using the first  set of 3 functions. Print out each array on a single line nicely formatted
  3.  Triple the elements in the arrays using the second set of 3 functions. Print out each array on a single line nicely formatted
 
Note:  You may use traditional random number generation functions or use the new C++2011 more finely tuned random number generation functions. 
   
Use the new C++2011 ranged for loop for the loops that you create to process the array and vector objects (array2 and array3). Note:  a ranged for loop cannot be used with a c-style array.
 
An executable solution for this problem has been attached to the assignment.
  
When you have completed this assignment attach your source program assign1.cpp to assignment A01 in TalonNet.
