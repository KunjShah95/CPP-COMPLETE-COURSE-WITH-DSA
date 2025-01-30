#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacciSeries(int n)
{
    cout << "The fibonacci series is as follows: ";
    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the number of terms you want in the fibonacci series: ";
    cin >> n;
    printFibonacciSeries(n);
    return 0;
}
