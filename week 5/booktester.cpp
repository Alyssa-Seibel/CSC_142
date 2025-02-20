/*
   booktester.cpp
   - In this file, you create three books using the "Book" class. Then you change the price and reprint it. 
   - Alyssa Seibel
   - 2/19/25
*/

#include <iostream>
#include <iomanip>
#include "book.h"

int main(){

    Book book1 = Book("01348484x", "Tony Gaddis", "Starting out with java", 4, "PE", 118.30);

    Book book2 = Book("6484656", "Jordan D", "BioChem", 8,"UH", 24.85);

    Book book3 = Book("22525663", "Keegan F", "Business Guide", 3, "ID", 95.36 );


    printHeader();
    book1.printRow();
    book2.printRow();
    book3.printRow();

    std::cout << "---------------------------------------------------------------------------------------------\n";

    book1.changePrice(101.32);
    book2.changePrice(22.34);
    book3.changePrice(90.99);

    std::cout << "---------------------------------------------------------------------------------------------\n";

    book1.printRow();
    book2.printRow();
    book3.printRow();

    std::cout << "---------------------------------------------------------------------------------------------\n";


    

}




