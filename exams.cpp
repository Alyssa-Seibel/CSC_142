/* Exams.cpp
    - This file allows you to input your name and three exam scores. After your responses are inputted, it will calculate your grade average.
    - Alyssa Seibel
    - Today’s date
    
    2. In this file, create a single function called main() that performs the following steps 
    (if you are unsure how to do any of these things, consult with last weeks lab to find suggestions):

        - Prompt the user to input a String that is their name.

        - Prompt the user to input three integers, representing exam scores. Each
        integer should be stored in a separate variable of type int.

        - Calculate the average of the three exam scores and store the result in a
        variable of type double. Note: be careful about integer division! For full
        credit the average you calculate must be numerically correct.

        - Display the input data (the user’s name and three exam scores). Also
        display the calculated result (the exam average), formatted to two digits
        to the right of the decimal point.

        - For full credit, your program must print all the input data as well as the
        results, in a clearly understandable manner, with appropriate descriptive
        labels and formatting.

    4. A successful run should have output that looks something like the output that is provided in the Lab3 folder:

*/
#include <iostream>
#include <string> // include this header for std::string
#include <iomanip>


int main() {
    std::string desc; // declare the desc variable as a string 

    //3 exam score variables
    int score1, score2, score3;
    double average;

   

    // give the user a prompt
    std::cout << "Please enter your name: ";
    std::getline(std::cin, desc);

    std::cout << "Enter your first exam score: ";
    std::cin >> score1;

    std::cout << "Enter your second exam score: ";
    std::cin >> score2;

    std::cout << "Enter your third exam score: ";
    std::cin >> score3;

    average = (score1 + score2 + score3) / 3.0;

    //printing it out
    std::cout << "\n";
    std::cout << "Hello, " + desc + "." << std::endl;
    std::cout << "Your three exam scores are " << score1 << ", " << score2 << ", " << score3 << "." << std::endl;
    std::cout << "Your average exam score is " << std::fixed << std::setprecision(2) << average << " points." << std::endl;

    return 0;


}