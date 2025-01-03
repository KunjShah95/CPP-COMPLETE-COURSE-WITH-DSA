#include <iostream>
#include <functional>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    int m;
    cout << "Enter another number:" << endl;
    cin >> m;

    // Function to calculate GCD
    auto gcd = [](int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    };

    int result = gcd(n, m);
    cout << "GCD of " << n << " and " << m << " is: " << result << endl;
}