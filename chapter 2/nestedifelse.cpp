#include <iostream>
using namespace std;

int main()
{
    int year = 2023;

    if (year % 4 == 0) {
        // first nested if-else statement
        if (year % 100 == 0) {
            // second nested if-else statement
            if (year % 400 == 0) {
                cout << year << " is a leap year.";
            }
            else {
                cout << year << " is not a leap year.";
            }
        }
        else {
            cout << year << " is a leap year.";
        }
    }
    else {
        cout << year << " is not a leap year.";
    }

    return 0;
}
