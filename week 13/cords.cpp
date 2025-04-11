/*
cords.cpp
- In this file you are asked for coords, thrust, angle, and warp factor. Then it calculates your new coords and prints them back to you. 
- Alyssa Seibel
- 3/7/25
*/


#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

constexpr double pi = 3.14159265358979323846;
double degrees_to_radians(double degrees){
    return degrees * (pi/180.0);
}
int main(){

    double x, y ,z, thrust, warp_factor, angle;

    std::cout << "Enter the x, y, and z coordinates: " << std::endl;
    std::cin >> x >> y >> z; 

    std::cout << "\nEnter the thrust amount: " << std::endl;
    std::cin >> thrust;

    std::cout << "\nEnter the angle: " << std::endl;
    std::cin >> angle;

    std::cout << "\nEnter the warp factor: " << std::endl;
    std::cin >> warp_factor;
    
    double angle_rad = degrees_to_radians(angle);

    double new_x = (x + thrust * std::cos(angle)) * warp_factor;
    double new_y = (y + thrust * std::sin(angle))* warp_factor;
    double new_z = z + (thrust/ warp_factor);

    std::cout << "\n This is your coordinates after hyperspace jump: "<< std::endl;
    std::cout << std::fixed << std::setprecision(3);
    std::cout << "X: " << new_x << std::endl;
    std::cout << "Y: " << new_y << std::endl;
    std::cout << "Z: " << new_z << std::endl;

}