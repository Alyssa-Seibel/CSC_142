/*
swap.cpp
- In this file a swap is used to switch two inserts around.
- Alyssa Seibel
- 4/21/25
*/

#include <iostream>
#include <string>


void gadget(std::string g1, std::string g2){

    std::cout << "\nGadget 1: " << g1 << ", Gadget 2: " << g2;
}

int main(){

    std::string gadget1 = "Batarang";
    std::string gadget2 = "Gappling Hook";
    gadget(gadget1, gadget2);

    std::swap(gadget1, gadget2);
    gadget(gadget1,gadget2);
}