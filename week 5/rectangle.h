/*
   rectangle.h
   - In this file the "Rectangle" class is created. 
   - Alyssa Seibel
   - 2/17/25
*/

#pragma once
#include <iostream>
#include <string>
class Rectangle
{
    private:
        double length;
        double width;
    public:

        //default constructor
        //Rectangle() : length(0.0), width(0.0) {}

        inline void setWidth(double width1){
            width = width1;
        }
        inline double getWidth(){
            return width;
        }

        inline void setLength(double length1){
            length = length1;
        }
        inline double getLength(){
            return length;
        }
        inline double getArea(){
            return length*width;
        }
};

