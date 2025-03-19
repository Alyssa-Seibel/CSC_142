/*
name.cpp
- In this file 
- Alyssa Seibel
- 3/7/25
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