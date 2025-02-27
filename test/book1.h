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
        std::string truncatedTitle = title;

    public:
        // Default constructor
        Book() : codeNum(""), author(""), title(""), edition(0), pubCode(""), price(0.0){}
        

        // parameter contructor 
        Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr){
            codeNum = cn;
            author = au;
            title = ti;
            edition = ed;
            pubCode = pc;
            price = pr;
        };
       
        inline std::string getTitle() const { return title; }  
        inline std::string getAuthor() const { return author; }  
        inline double getPrice() const { return price; }   
        inline int getEdition() const { return edition; }   
        inline std::string getISBN() const { return codeNum; }
        inline std::string getPubCode() const { return pubCode; }  


        inline void changePrice(double newPrice) {
            std::cout << "Changing " << "'" << title << "'" << " price from $ " 
            << std::fixed << std::setprecision(2) << price
             << " to $ " << newPrice << "\n";
             price = newPrice;}

        inline void printRow() {
            //std::string truncatedTitle = title;
            truncatedTitle = title;
            
            std::cout   << std::left << std::setw(15) << codeNum
                        << std::setw(15) << author 
                        << std::setw(20) << truncatedTitle
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


