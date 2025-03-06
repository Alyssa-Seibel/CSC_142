/*
book.h
- In this file the "Book" class is created. A constructor is added to file information easier. Then I created methods to print out the information easier in the main int()
- Alyssa Seibel
- 3/2/25
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

    friend bool operator==(const Book& lhs, const Book& rhs){
        return lhs.getISBN() == rhs.getISBN();
    }

    friend std::ostream& operator<<(std::ostream& output, Book& book){
        output  << "ISBN: " << book.codeNum << "\n"
                << "Author: " << book.author << "\n"
                << "Title: " << book.title << "\n"
                << "Edition: " << book.edition << "\n"
                << "Pub Code: " << book.pubCode << "\n"
                << "Price: $" << std::fixed << std:: setprecision(2) << book.price;
        return output;
    }
    
        

        // parameter contructor 
        Book(std::string cn = (""), std::string au= (""), std::string ti= (""), int ed= (0), std::string pc= (""), double pr= (0.0)){
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
            std::string truncatedTitle = title;
            std::string shortAuthor = author;

            if (truncatedTitle.length() > 45){
                truncatedTitle = truncatedTitle.substr(0, 40);
            }
            if (shortAuthor.length() > 15){
                shortAuthor = shortAuthor.substr(0, 12);
            }

            std::cout   << std::left << std::setw(15) << codeNum
                        << std::setw(15) << shortAuthor
                        << std::setw(45) << truncatedTitle
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
    

    

