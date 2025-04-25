/*
tuple.cpp
- In this file a tuple which is similar to a pair, but can hold as many inserts as you want.
- 4/23/25
*/

#include <iostream>
#include <string>
#include <tuple>

std::tuple<int, std::string, bool> getRiddle(){
    return{3,"What gets more wet as it dries?",true};
}

int main(){
    
    int number;
    std::string riddle;
    bool solved;
    
    
    std::tie(number, riddle,solved) = getRiddle();
    
    std::cout << "Riddle #" << number << ": " << riddle << 
    "\nDid Batman solve this riddle?: " << (solved ? "Yes" : "No")
    << std::endl;
    
}