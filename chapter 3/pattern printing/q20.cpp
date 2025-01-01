#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t; // Number of test cases
    for (int test = 0; test < t; test++)
    {
        int n;
        cin >> n; // Number of rows (should correspond to odd numbers of stars)

        for (int i = 0; i < n; i++)
        {
            int stars = 2 * (n - i) - 1; // Calculate odd number of stars (9, 7, 5, ...)

            // Print leading spaces
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }

            // Print stars
            for (int j = 0; j < stars; j++)
            {
                cout << "*";
            }

            // Move to the next line
            cout << endl;
        }
    }

    return 0;
}
