#pragma once
#include <iostream>
#include "book1.h"

class Inventory {

    private:
        Book* books;
        int nextEntry;
        int length;
        std::string isbn;


    public:
    
        
    

        Inventory(int size) : length(size), nextEntry(0) {
            books = new Book[length]; // This is creating a list based on the input of the size
        }

        ~Inventory(){
            delete[] books;
        }


        bool addBook (Book& theBook) {
            if (nextEntry >= length){ // if the next entry is at a bigger number than the length of the inventory
                return false;
            }

            for (int i = 0; i < nextEntry; i++){
                if (books[i].getISBN() == theBook.getISBN()){
                    std::cout << "ERROR adding book: " << theBook.getISBN() << std::endl;
                    return false;
                }
            }

            books[nextEntry++] = theBook;
            return true;

        }

        void changePrice(const std::string& isbn, double newPrice){
            for(int i = 0; i < nextEntry; i++ ){ // counter starts at 0 - when the number is less than the number in inventory - add to the counter
                if (books[i].getISBN() == isbn) { // if the isbn matches the one looking for then change the price
                    books[i].changePrice(newPrice);
                    std::cout << "Price updated for ISBN: " << isbn << std::endl;
                    return;
                }
                std::cout << "ISBN not found" << std::endl;
            }
        }

        void printInventory(){
            for (int i = 0; i < nextEntry; i++){
                books[i].printRow();
            }
        }

};