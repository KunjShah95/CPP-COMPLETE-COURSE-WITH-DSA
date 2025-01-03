#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "It is a prime number" << endl;
    }
    else if (count == 1 || count == 0)
    {
        cout << "It is not a prime number" << endl;
    }
    else
    {
        cout << "It is not a prime number" << endl;
    }
    return 0;
}