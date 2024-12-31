#include<iostream>
using namespace std;
int x; //gloval x
int main()
{
    int x=10; //local x
    cout<<"VaLue of global x is "<< ::x;
    cout<<"\nValue of local x is "<<x;
    return 0;
}