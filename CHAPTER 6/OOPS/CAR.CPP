#include<iostream>
using namespace std;
class Car{
    public:
    string brand;
    string model;
    int year;
};
void print(Car c){
    cout<<c.brand<<" "<<c.model<<" "<<c.year<<endl;
}
void change(Car c ){
    c.brand="Audi";
    c.model="A8";
    c.year=2022;
}
int main()
{
   
    Car c1;
    c1.brand="Maruti Suzuki";
    c1.model="Swift";
    c1.year=2016;
    print(c1);
    change(c1);//pass by value
    print(c1);

    // Car c2;
    // c2.brand="Toyota";
    // c2.model="Camry";
    // c2.year=2020;

    // Car c3;
    // c3.brand="Honda";
    // c3.model="Civic";
    // c3.year=2019;
    // print(c1);
    // print(c2);
    // print(c3);
    return 0;
}