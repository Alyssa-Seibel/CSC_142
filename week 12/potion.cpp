/*
potion.cpp
- In this file 
- 4/1/25
*/
#include <iostream>
#include <string>

int main(){

int gold = 100;
int potionprice = 10;
std::string amount;

std::cout << "Potions are 10 gold each, how many would you like to buy?" << std::endl;
std::getline(std::cin, amount);

int amountnum = std::stoi(amount);
int totalprice = amountnum * 10;


if (amountnum == 0){
    std::cout << "Have a nice day!";
}
else{
    std::cout << "You bought " << amount << " potions for a price of " << totalprice << " gold. You have " << gold - totalprice << " gold left." << std::endl;
};
    return 0;
}



