/*
countdown.cpp
- In this file a countdown starts. Once it reaches 10 it prints ready for takeoff.  
- Alyssa Seibel
- 3/7/25
*/
#include <iostream>

int main() {

    int count = 10;
    for (int i = 0; i <= count; i++){
        std::cout<<"\n"<< i << "...";
    
        if (i == 10){
            std::cout<<"\n" << "Ready for take off!";
        }
    }
}