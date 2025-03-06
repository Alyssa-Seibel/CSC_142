/*
inventorytester.cpp
- In this file an inventory array is created of 13 spaces. 13 books are added to the array through a checker which checks if there are duplicates. Then prices are changed using a price changer method and the inventory is reprinted.
- Alyssa Seibel
- 3/2/25
*/

#include <iostream>
#include <iostream>
#include "book1.h"
#include "inventory.h"

int main() {

    Inventory myInv = Inventory(13);

    Book book1 = Book ( "013478796X", "Tony Gaddis",
         "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 121.75);
    Book book2 = Book ("0321409493", "John Lewis",
         "Java Software Solutions: Foundations of Program Design", 5, "AW", 94.00);
    Book book3 = Book ( "0134743350", "Harvey Deitel",
         "Java How to Program, Early Objects", 12,"PE", 134.84);
    Book book4 = Book ( "002360692X", "Richard Johnsonbaugh", "Algorithms", 1, "PH", 109.00);
    Book book5 = Book ( "1593276036", "Eric Matthes", "Python Crash Course", 1, "NS", 39.95) ;
    Book book6 = Book ( "0143067889", "Ray Kurzweil", "The Singularity is Near", 1, "PG", 17.70);

    Book book7 = Book ("0134444329", "Tony Gaddis", "Starting Out With Python", 4, "PE", 99.95);
    Book book8 = Book (   "0133582736", "Tony Gaddis", "Starting Out With Python", 3, "PE", 19.95);
    Book book9 = Book ( "013478796X", "Tony Gaddis", 
     "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 145.38);
    Book book10 = Book ("1119056553", "Cay Horstmann", "Python for Everyone", 2, "WI", 98.38 );
    Book book11 = Book ("0134802217", "Tony Gaddis", 
            "Starting Out With Java: From Control Structures through Objects", 7, "PE", 188.95);
    Book book12 = Book (
     "0134462017", "Tony Gaddis", 
     "Starting Out With Java: Early Objects", 6, "PE", 58.50);
     Book book13 = Book ("013478796X", "Tony Gaddis",
          "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 121.75);



myInv.addBook(book1);
myInv.addBook(book2);
myInv.addBook(book3);
myInv.addBook(book4);
myInv.addBook(book5);
myInv.addBook(book6);
myInv.addBook(book7);
myInv.addBook(book8);
myInv.addBook(book9);
myInv.addBook(book10);
myInv.addBook(book11);
myInv.addBook(book12);
myInv.addBook(book13);


std::cout << "\nInitial report: " << std::endl;
std::cout << "---------------------------------------------------------------------------------------------\n";

myInv.printInventory();
std::cout << "---------------------------------------------------------------------------------------------\n";

book1.changePrice(101.32);
book2.changePrice(84.34);
book3.changePrice(120.99);


std::cout << "\nFinal report: " << std::endl;
std::cout << "---------------------------------------------------------------------------------------------\n";
myInv.printInventory();
std::cout << "---------------------------------------------------------------------------------------------\n";

};