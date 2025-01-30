#include <iostream>
#include <vector>

using namespace std;

// Function to calculate Fibonacci number using recursion
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to visualize the recursion tree
void print_recursion_tree(int n, int level = 0)
{
    if (n <= 1)
    {
        for (int i = 0; i < level; ++i)
        {
            cout << "  ";
        }
        cout << n << endl;
        return;
    }

    for (int i = 0; i < level; ++i)
    {
        cout << "  ";
    }
    cout << "F(" << n << ")" << endl;

    print_recursion_tree(n - 1, level + 1);
    print_recursion_tree(n - 2, level + 1);
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Fibonacci number: " << fibonacci(n) << endl;
    cout << "Recursion Tree:" << endl;
    print_recursion_tree(n);

    return 0;
}