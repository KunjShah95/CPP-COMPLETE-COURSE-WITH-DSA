
#include<iostream>
using namespace std;

long long fact(int x){
    long long f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}

int main()
{
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n; 
    int r;
    cout<<"Enter r:"<<endl;
    cin>>r;

    long long permutation = fact(n) / fact(n-r);
    long long combination = fact(n) / (fact(r) * fact(n-r));

    cout<<"Permutation: "<<permutation<<endl;
    cout<<"Combination: "<<combination<<endl;

    return 0;
}