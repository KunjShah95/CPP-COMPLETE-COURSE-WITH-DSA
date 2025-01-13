// print 1 to n  using backtracking and dont use func(i+1,n) in the code.
#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
    {
        return; // Base case
    }
    print(n - 1);     // Recursive call
    cout << n << " "; // Print during the backtracking phase
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    print(n);
    return 0;
}
