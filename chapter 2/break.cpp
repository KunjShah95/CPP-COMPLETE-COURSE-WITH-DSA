#include <iostream>
using namespace std;
 
// Driver Code
int main()
{
    for (int i = 1; i < 10; i++) {
 
        // Breaking Condition
        if (i == 5)
            break;
        cout << i << " ";
    }
    return 0;
}