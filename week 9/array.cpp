/*
array.cpp
- In this file an inventory array is created of 13 spaces. 13 books are added to the array through a checker which checks if there are duplicates. Then prices are changed using a price changer method and the inventory is reprinted.
- Alyssa Seibel
- 3/17/25
*/

#include <iostream> 


int main(){

    int arr1[] = {4, 8, 1};
    int arr2[] = {4, 8, 1};

    bool alike = true;
    int sizearray = sizeof(arr1) / sizeof(arr1[0]);

    for (int i = 0; i < sizearray; i++){
        if (arr1[i] != arr2[i]){

            alike = false;
        
        }
        

    };

    if (alike) {
        std::cout << "Arrays are the same.";

    }
    else{
        std::cout << "Arrays are not the same.";
    }

    return 0;



}