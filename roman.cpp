/*
   Roman.cpp
   - In this file you enter a number from 1-100 and it will return the value in a roman numeral.
   - Alyssa Seibel
   - 1/29/25
     


*/


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string intToRoman(int number){

    string roman = "";

    int tens = number / 10;
    int ones = number % 10;

    if (tens == 1) roman += "X";
    else if (tens == 2) roman += "XX";
    else if (tens == 3) roman += "XXX";
    else if (tens == 4) roman += "XL";
    else if (tens == 5) roman += "L";
    else if (tens == 6) roman += "LX";
    else if (tens == 7) roman += "LXX";
    else if (tens == 8) roman += "LXXX";
    else if (tens == 9) roman += "XC";
    
    if (ones == 1) roman += "I";
    else if (ones == 2) roman += "II";
    else if (ones == 3) roman += "III";
    else if (ones == 4) roman += "IV";
    else if (ones == 5) roman += "V";
    else if (ones == 6) roman += "VI";
    else if (ones == 7) roman += "VII";
    else if (ones == 8) roman += "VIII";
    else if (ones == 9) roman += "IX"; 
    
    return roman;
}
    
int main() {

    int number;

    do {
        std::cout<<"Enter a number between 1 and 100: ";
        std::cin>>number;
    }while (number <1 || number >100); // repeat if invalid
    
    if (number == 100) {
        std::cout << "Roman numeral: C" << std::endl;
    } else {
        std::cout << "Roman numeral: " << intToRoman(number) << endl;
    }

    return 0;
}