#include<iostream>
using namespace std;
class loading{
    public:
    void add(int a,int b)
    {
        cout<<a+b<<endl;
    }
    void add(int a,int b,int c)
    {
        cout<<a+b+c<<endl;
    }
     
};
int main()
{
    loading l;
    l.add(10,20);
    l.add(10,20,30);

    return 0;
}