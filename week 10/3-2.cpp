/*
3-2.cpp
- In this file two methods are created. One reads an array and one rewrites an array based on what spot you want it to be in.
- 3/24/25
*/


#include <iostream>
#include <cstdio>

 const int size = 6; // buffer size including a null terminatior t the end

 char read_from(const char* arr, int index)
 {
    return(index >= 0 && index < size - 1) ? arr[index] : '\0';

 };
void write_to( char* arr, int index, char value)
 {
    if(index >= 0 && index < size - 1) arr[index] = value;
 };

 int main ()
 {

    char upper[] = "ABC?E";
    char lower[] = "abc?e";

    write_to(lower, 3, 'd');
    write_to(upper, 3, 'D');

    std::cout<< "Lower: "<< lower << "\nUpper: " << upper<< std::endl;
    std::cout << "Letter 3 in lower: "<< read_from(lower,3) << "\nLetter 3 in upper: "<< read_from(upper,3)<< std::endl;


 }
