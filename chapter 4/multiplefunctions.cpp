#include<iostream>
using namespace std;
void usa(){
    cout<<"You are in USA"<<endl;
    return ;
}

void india(){
    cout<<"You are in India"<<endl;
    usa();
}

int main(){
    cout<<"You are in main"<<endl;
    india();

    return 0;
}