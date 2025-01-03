#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // Print the first half of the row
        for (int j = 0; j <= i; j++)
        {
            cout << char('A' + j);
        }
        // Print the second half of the row
        for (int j = i - 1; j >= 0; j--)
        {
            cout << char('A' + j);
        }
        cout << endl;
    }

    return 0;
}
