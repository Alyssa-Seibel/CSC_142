/*
name.cpp
- In this file you are asked your name and age and given how many days old you are. 
- Alyssa Seibel
- 3/17/25
*/

#include <iostream>
#include <string>

void get_days(int age){
    int days = age * 365;
    std::cout << "If you are " << age << " years old you are " << days << " days old." << std::endl;

}

int main() {

    std::string name;
    int age;
    

    std::cout << "Please enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Please enter your age: ";
    std::cin >> age;

    get_days(age);

    return 0;





}