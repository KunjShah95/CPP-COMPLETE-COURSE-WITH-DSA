#include<iostream>
using namespace std;
int main()
{
    //method 1
    // int x=1;
    // int y=5;
    // cout<<x<<" "<<y<<endl;
    // int temp=x;
    // x=y;
    // y=temp;
    // cout<<x<<" "<<y<<endl;

    //method 2
    int x=1;
    int y=5;
    cout<<x<<" "<<y<<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<x<<" "<<y<<endl;
    
        return 0;
}