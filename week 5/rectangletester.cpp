/*
   rectangletester.cpp
   - In this file you are asked the width and length of three rooms. After inputted, it gives you the area of each room
   - Alyssa Seibel
   - 2/17/25
*/
#include <iostream>
#include "rectangle.h"
#include <sstream>


int main(){

    std::string input;
    double length1, width1;
    Rectangle kitchen, bedroom, livingroom;

    std::cout << "\nWhat is the length of the kitchen?: ";
    std::getline(std::cin, input);
    std::stringstream(input) >> length1; //this makes it so the input string converts to the length int
    kitchen.setLength(length1); //this sets the kitchen length using the class

    std::cout << "\nWhat is the width of the kitchen?: ";
    std::getline(std::cin, input);
    std::stringstream(input) >> width1;
    kitchen.setWidth(width1);

    std::cout << "\nWhat is the length of the bedroom?: ";
    std::getline(std::cin, input);
    std::stringstream(input) >> length1;
    bedroom.setLength(length1); 

    std::cout << "\nWhat is the width of the bedroom?: ";
    std::getline(std::cin, input);
    std::stringstream(input) >> width1;
    bedroom.setWidth(width1);

    std::cout << "\nWhat is the length of the living room?: ";
    std::getline(std::cin, input);
    std::stringstream(input) >> length1;
    livingroom.setLength(length1);

    std::cout<<"\nWhat is the width of the living room?: ";
    std::getline(std::cin, input);
    std::stringstream(input)>>width1;
    livingroom.setWidth(width1);


    std::cout << "\nThe kitchen is " << kitchen.getLength() << " x " << kitchen.getWidth() << ", with an area of " << kitchen.getArea() << " sq ft.";
    std::cout<< "\nThe bedroom is " << bedroom.getLength() << " x " << bedroom.getWidth() << ", with an area of " << bedroom.getArea() << " sq ft.";
    std::cout << "\nThe living room is " <<livingroom.getLength() << " x " << livingroom.getWidth() << ", with an area of " << livingroom.getArea() << " sq ft.";


    return 0;







}