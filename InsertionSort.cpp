/* 

Michael Tong
InsertionSort.cpp
This code will take the hard coded int array and sort it using insertion sort. 

*/

#define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))
#include <iostream>

using namespace std;

int main()

{

cout << "This program will sort these numbers using Insertion Sort: " << endl;
int array[7] = {80, 31, 26, 99, 5, 2, 7};
int key;
int i, j;

for (i = 0; i < ARRAY_SIZE(array); i++)

{

cout << array[i] << " ";

}

cout << endl;

for (i = 1; i < ARRAY_SIZE(array); i++)

{

key = array[i];
j = i - 1;

while ((j >= 0) && (array[j] > key))

{

array[j+1] = array[j];
j = j - 1;
array[j+1] = key;

}
}

cout << "The sorted array is: " << endl; 

for (i = 0; i < ARRAY_SIZE(array); i++)

{
 
cout << array[i] << " ";

}
}

