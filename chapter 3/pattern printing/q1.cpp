#include<iostream>
using namespace std;
int main()
{
    int n;
cout<<"Enter number of rows:"<<endl;
cin>>n;
int m;
cout<<"Enter number of columns:"<<endl;
cin>>m;
    for(int i=0;i<m;i++){
        for(int i=1;i<=n;i++){
            cout<<"* ";
        }
            cout<<endl;
        }

    return 0;
}