/**
 * @file singleinheritance.cpp
 * @brief Single inheritance example
 * @details This file contains an example of single inheritance in C++.
 *          It defines a base class called Scooty and a derived class called Bike.
 *          The derived class inherits the properties of the base class and adds
 *          two more properties of its own.
 */

#include <iostream>
using namespace std;

/**
 * @brief Base class for Scooter and Bike
 * @details This class contains the properties that are common to both Scooter
 *          and Bike.
 */
class Scooty {
public:
    int topSpeed; ///< Top speed of the vehicle
    float mileage; ///< Mileage of the vehicle
private:
    int bootspace; ///< Boot space of the vehicle
};

/**
 * @brief Derived class for Bike
 * @details This class inherits the properties of Scooter and adds two more
 *          properties of its own.
 */
class Bike : public Scooty {
public:
    int gears; ///< Number of gears in the bike
    int price; ///< Price of the bike
};

/**
 * @brief Main function
 * @details This function creates an object of the derived class and prints out
 *          the properties of the object.
 */
int main() {
    Bike b1;
    b1.topSpeed = 100;
    b1.mileage = 15.5;
    b1.gears = 4;

    cout << b1.topSpeed << " " << b1.mileage << " " << b1.gears << " " << endl;
    return 0;
}
