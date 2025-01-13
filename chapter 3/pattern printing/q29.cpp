#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;

    // Upper part of the pattern
    int iniS = 0; // Initial spacing
    for (int i = 0; i < n; i++)
    {
        // Left stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }
        // Inner spaces
        for (int j = 0; j < iniS; j++)
        {
            cout << "  ";
        }
        // Right stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }
        iniS += 2;
        cout << endl;
    }

    // Lower part of the pattern
    iniS = 2 * (n - 1); // Reset spacing for the lower part
    for (int i = 1; i <= n; i++)
    {
        // Left stars
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        // Inner spaces
        for (int j = 0; j < iniS; j++)
        {
            cout << "  ";
        }
        // Right stars
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        iniS -= 2;
        cout << endl;
    }

    return 0;
}
