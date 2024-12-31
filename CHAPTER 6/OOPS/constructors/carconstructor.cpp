#include<iostream>
#include<string>
using namespace std;
class Car{
    public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z){
        brand = x;
        model = y;
        year = z;
    }
};
int main()
{
    Car c1("Tesla", "Cybertruck", 2022);
    Car c2("Mahindra","XUV700",2024);
    cout<<c1.brand<<endl;
    cout<<c1.model<<endl;
    cout<<c1.year<<endl;
    cout<<c2.brand<<endl;   
    cout<<c2.model<<endl;
    cout<<c2.year<<endl;
    
    return 0;
}