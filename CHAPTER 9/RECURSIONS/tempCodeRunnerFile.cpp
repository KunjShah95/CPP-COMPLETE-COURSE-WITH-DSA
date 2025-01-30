void printFibonacciSeries(int n)
{
    cout << "The fibonacci series is as follows: ";
    for (int i = 0; i < n; i++)
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}
