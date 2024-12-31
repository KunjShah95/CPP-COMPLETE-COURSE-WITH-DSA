#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    float avg;
    Cricketer(string name, int runs,float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
};
/**
 * @brief Main function
 * 
 * @details This is the main function where all the code is executed.
 *          It creates a Cricketer object and a pointer to a Cricketer
 *          object, and then prints out the details of both objects.
 * 
 * @return 0
 */
int main()
{
    // create a Cricketer object
    Cricketer c1("Virat kohli",25000,55.2);

    // create a pointer to a Cricketer object
    Cricketer* c2= new Cricketer("Rohit sharma",18000,48.9);

    // print out the details of the objects
    cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
    cout<<c2->name<<" "<<c2->runs<<" "<<c2->avg<<endl;
    
    return 0;
}
