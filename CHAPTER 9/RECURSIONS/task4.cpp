// print in terms of n to 1.
#include <iostream>
using namespace std;
void func(int i)
{
    if (i < 1)
    {
        return;
    }
    cout << i << " ";
    func(i - 1);
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    func(n);
    return 0;
}