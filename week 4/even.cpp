/*
   even.cpp
   - In this file, 1000 numbers are generated and it lists how many are even and how many are odd.
   - Alyssa Seibel
   - 2/10/25
     

*/
#include <iomanip>
#include <iostream> 
#include <ctime>
using namespace std;

bool isEven(int num){
    return(num % 2) == 0; // 
}

int main() {
    srand(time(0));
    
    int totalnumbers = 1000; //a value to look back on
    int evennumber = 0, oddnumber = 0; // a starting value to add onto

    for (int i = 0; i < totalnumbers; i++) { // a starting value; when to act; what the action is
        int randomNum = rand() % 101; // 1 to 100

        if (isEven(randomNum)) {
            evennumber++;
        } else {
            oddnumber++;
        }
    }

    cout << "\nTotal numbers generated: " << totalnumbers << endl;
    cout << "Even numbers: " << evennumber << endl;
    cout << "Odd numbers: " << oddnumber << endl;




}