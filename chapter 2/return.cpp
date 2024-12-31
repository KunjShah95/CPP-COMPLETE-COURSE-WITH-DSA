#include <iostream>
using namespace std;
 
// Driver code
int main()
{
    cout << "Begin ";
 
    for (int i = 0; i < 10; i++) {
 
        // Termination condition
        if (i == 5)
            return 0;
        cout << i << " ";
    }
    cout << "end";
 
    return 0;
}