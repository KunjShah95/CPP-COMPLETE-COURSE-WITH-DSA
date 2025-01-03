#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    int temp = n;
    int sum = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum = sum + lastdigit * lastdigit * lastdigit;
        n = n / 10;
    }
    if (temp == sum)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}