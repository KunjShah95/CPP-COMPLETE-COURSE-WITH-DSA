#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << "  ";
        }
        cout << endl;
    }
    return 0;
}