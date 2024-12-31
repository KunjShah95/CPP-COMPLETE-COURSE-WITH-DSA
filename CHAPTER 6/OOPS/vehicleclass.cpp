#include<iostream>
using namespace std;
class vehicle
{
public:
   int topSpeed;
   float mileage;
   string fuel;
};
class TwoWheeler: public vehicle{
    public:

}  ;
class Bike: public TwoWheeler{
    public:
};
class FourWheeler: public vehicle{
    public:
    }  ;
class Car: public FourWheeler{
    public:
}
// class Car: public vehicle{
//     public:
//         string brand;
//         string model;
//         int year;
//     };
// class Bike: public vehicle{
//     public:
//         string brand;
//         string model;
//         int year;
// };
// class Truck: public vehicle{
//     public:
//         string brand;
//         string model;
//         int year;
//         int load;
//         int maxLoad;
// };
int main()
{
    
    return 0;
}