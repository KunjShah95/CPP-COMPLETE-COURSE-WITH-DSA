#include<iostream>
using namespace std;
class Scooty{
    public:
    int topspeed;
    float mileage;
     virtual  void sound(){
        cout<<"Vroom Vroom"<<endl;
    }
    private:
    int bootspace;
};

class Bike:public Scooty{
    public:
    int gears;
   virtual  void sound(){
        cout<<"Dhroom Dhroom"<<endl;
    }

};
class SuperBike: public Scooty{
    public:
    void sound(){
        cout<<"Dhoom Dhoom"<<endl;
    }
};
int main()
{
    // Bike* b = new  Bike(); //object pointer
    // b->sound();
    // b->topspeed = 100;
    // b->mileage = 15.5;
    // b->gears = 4;
    // cout<<b->topspeed<<" "<<b->mileage<<" "<<b->gears<<endl;
    // Scooty s;
    // s.sound();
    // s.topspeed = 100;
    // s.mileage = 15.5;
    // cout<<s.topspeed<<" "<<s.mileage<<endl;
    // Scooty* b = new Bike();
    // b->sound();
    SuperBike* c= new SuperBike();
    c->sound();
     return 0;
}