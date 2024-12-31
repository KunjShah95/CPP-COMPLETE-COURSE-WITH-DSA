#include<iostream>
void printMin(int arr[5]);
using namespace std;
int main()
{
    int ar[5] ={30,10,20,40,50};
    printMin(ar);
    }  //passing array to function
    void printMin(int arr[5]){
        int min = arr[0];
        for(int i=0;i<5;i++){
            if(min>arr[i]){
                min = arr[i];
        }
    }
    cout<<"Minimum element is : "<<min<<endl;
    }
    
