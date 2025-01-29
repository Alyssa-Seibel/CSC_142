/* 
   MPG.cpp
   - In this file it asks for a description of your car, how far you traveled, and how much gas is used. Then it tells you your vehicle efficientcy in both lkm and mpg.
   - Alyssa Seibel
   - 1/27/25
     
    
 */

#include <iostream>
#include <iomanip>

int main(){   
    // Constant declarations
    const double KM_PER_MILE = 1.60934;
    const double LITERS_PER_GALLON = 3.78541;
    
    // Variable declarations
    std::string desc;
    int miles;
    float gallons, liters;      
    float mpg, lkm ,km;

    // Prompt for user inputs
    // Ensure that when typing input in the console, you give a whole number for miles,
    // otherwise you might run into miscalculations
    std::cout<<"Please enter a description of your car: ";
    std::getline(std::cin, desc);
    std::cout<<"How many miles did you drive? ";
    std::cin>>miles;
    std::cout<<"How many gallons of gas did you use? ";
    std::cin>>gallons;

    // Calculate the results
    mpg = miles / gallons;
    km = miles * KM_PER_MILE;
    liters = gallons * LITERS_PER_GALLON;
    lkm = (liters / km) * 100;

    // Print the user inputs and final results
    std::cout<<"\n";
    std::cout<<"Fuel efficiency of your " + desc + ":"<<std::endl;
    std::cout<<"You drove " << miles << " miles and used " << gallons << " gallons."<<std::endl;
    std::cout<<"Your fuel efficiency is " << mpg << " miles per gallon."<<std::endl;

    std::cout<<"\n";
    std::cout<<"Fuel efficiency of your " + desc + ":"<<std::endl;
    std::cout<<"you drove " << km << " kilometers and used " << liters << " liters."<<std::endl;
    std::cout<<"Your fuel efficiency is " << std::fixed << std::setprecision(2) << lkm << " liters per 100 km "<<std::endl;

    return 0;
}