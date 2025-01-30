#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}
int main()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    cout << "Sum of first " << n << " natural numbers is " << sum(n) << endl;
    return 0;
}
