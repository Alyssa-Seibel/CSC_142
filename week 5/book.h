/*
book.h
- In this file the "Book" class is created. A constructor is added to file information easier. Then I created methods to print out the information easier in the main int()
- Alyssa Seibel
- 2/19/25
*/

#include <iostream>
#include <string>
#include <iomanip>
#pragma once
class Book {

    private:
        std::string codeNum;
        std::string author;
        std::string title;
        int edition;
        std::string pubCode;
        double price;

    public:
        Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr){
            codeNum = cn;
            author = au;
            title = ti;
            edition = ed;
            pubCode = pc;
            price = pr;
        };
       
        inline void getTitle(std::string ti){title = ti;}
        inline void getAuthor(std::string au){author = au;}
        inline void getPrice(double pr){price = pr;}
        inline void getEdtion(int ed){edition = ed;}
        inline void getISBN(std::string cn){codeNum = cn;}
        inline void getPubCode(std::string pc){pubCode = pc;}

        inline void changePrice(double newPrice) {
            std::cout << "Changing " << "'" << title << "'" << " price from $ " 
            << std::fixed << std::setprecision(2) << price
             << " to $ " << newPrice << "\n";
             price = newPrice;}

        inline void printRow() const {
            std::cout << std::left << std::setw(15) << codeNum
            << std::setw(15) << author 
            << std::setw(45) << title
            << std::setw(4) << edition
            << std::setw(5) << pubCode
            << "$" << std::right << std::setw(7) << std::fixed << std::setprecision(2) << price
            << std::endl;
        }
    };

    inline void printHeader(){
        std::cout << "---------------------------------------------------------------------------------------------\n";
        std::cout << std::left << std::setw(15) << "ISBN"
                  << std::setw(15) << "AUTHOR"
                  << std::setw(45) << "TITLE" 
                  << std::setw(4) << "ED"
                  << std::setw(5) << "PUB"
                  << "Price"<< std::endl;
        std::cout << "---------------------------------------------------------------------------------------------\n";
            
    }


