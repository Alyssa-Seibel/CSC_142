/*
    - Tax.cpp
    - In this file you list an item and its cost and the program will tell you the tax on the item and the total with tax.
    - Alyssa Seibel
    - 02/03/25

*/

#include <iostream>
#include <iomanip>

int main() {

    const double TAXRATE = .06;
    bool keepGoing = true;
    std::string describe, cost;
    double costvalue = 0;
    double tax = 0;
    double total = 0;

    while (keepGoing ) {
        std::cout << "Describe your purchase: ";
        std::getline (std::cin, describe);

        do{

            std::cout << "How much did it cost: ";
            std::getline (std::cin, cost);

            costvalue = std::stod(cost);

            if (costvalue < 0){
                std::cout << "Please enter a valid price. ";
            }
        } while (costvalue < 0);

        double tax = costvalue * TAXRATE;
        double total = costvalue + tax;

        //output 
        std::cout<<"\n"<<std::endl;
        std::cout<<"----------------------------"<<std::endl;
        std::cout<< "Item description: "<<describe<<std::endl;
        std::cout<< "Item price: $"<<std::fixed<<std::setprecision(2)<<costvalue<<std::endl;
        std::cout<<"\n"<<std::endl;
        std::cout<<"Item's sales tax: $"<<tax<<std::endl;
        std::cout<< "Total price: $"<<std::fixed<<std::setprecision(2)<<total<<std::endl;
        std::cout<<"----------------------------"<<std::endl;

        std::cout << "Do you want to enter another item? (yes/no): ";
        std::string response;
        std::getline(std::cin, response);
        if (response != "yes") {
            keepGoing = false;
        }   

    }

    return 0;
}