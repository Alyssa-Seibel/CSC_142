/*
   primefactorial.cpp
   - This program generates a random number between 1 and 50. It then calculates if it is a prime number, and if it is a prime number it will calculate its factorial value. 
   - Alyssa Seibel
   - 2/12/25

*/

#include <iostream>
#include <iomanip>
#include <ctime>

bool isPrime(int num){
    if (num <= 1) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    return true;
}



double factorial (int n){
    double i, total=1;
    for(i = n; i > 0; i--) {
        total*= i;
        
    }
    return total ;
}

int main(){
    std::srand(time(0));
    char choice; // users choice to continue

    do {

        int randomnum = rand() % 51;
       
        if (isPrime(randomnum)) {
            std::cout << randomnum << " is a prime number. \n";
            std::cout << "The factorial of " << std::fixed<< std::setprecision(0)<< randomnum << " is " << factorial(randomnum) << ".\n";

        } else {
            std::cout << randomnum << " is not a prime number. \n";
        }
        
        std::cout << "Would you like to generate again?: (y/n)" << std::endl;
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    std::cout << "Goodbye!\n";


    
    return 0;

}