#include <iostream>
using namespace std;
int main()
{
    //Declare variables
    float rate, time, si, principle;

    //Get input from the user
    cout << "Enter the rate" << endl;
    cin >> rate;

    cout << "Enter the time" << endl;
    cin >> time;

    cout << "Enter the principle" << endl;
    cin >> principle;

    //Calculate the simple interest
    si = principle * rate * time / 100;

    //Display the result
    cout << "Simple interest is: " << si << endl;

    return 0;
}
