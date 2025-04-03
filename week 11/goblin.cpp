/*
goblin.cpp
- In this file a class called goblin is created. When a goblin is spawned a constructor says so and when it is gone a destructor says so.
- Alyssa Seibel
- 3/31/25
*/

#include <iostream>
#include <string>

class Goblin {

    public:

        Goblin() {
            std::cout << "A goblin has been spawned!"<< std::endl;

        };

        ~Goblin(){
            std::cout << "The goblin has disapeared!" << std::endl;

        };
};

int main(){

    Goblin goblin1;
}