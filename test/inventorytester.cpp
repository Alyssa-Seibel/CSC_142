#include <iostream>
#include <iostream>
#include "book1.h"
#include "inventory.h"

int main() {

    Inventory myInv = Inventory(10);

    Book book1 = Book ( "013478796X", "Tony Gaddis",
         "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 121.75);
    Book book2 = Book ("0321409493", "John Lewis",
         "Java Software Solutions: Foundations of Program Design", 5, "AW", 94.00);
    Book book3 = Book ( "0134743350", "Harvey Deitel",
         "Java How to Program, Early Objects", 12,"PE", 134.84);
    Book book4 = Book ( "002360692X", "Richard Johnsonbaugh", "Algorithms", 1, "PH", 109.00);
    Book book5 = Book ( "1593276036", "Eric Matthes", "Python Crash Course", 1, "NS", 39.95) ;
    Book book6 = Book ( "0143067889", "Ray Kurzweil", "The Singularity is Near", 1, "PG", 17.70);



myInv.addBook(book1);
myInv.addBook(book2);
myInv.addBook(book3);
myInv.addBook(book4);
myInv.addBook(book5);
myInv.addBook(book6);


printHeader();
book1.printRow();
book2.printRow();

};