#include<iostream>
using namespace std;
void printString(const std::string* str){
    cout<<*str<<endl;
}
int main()
{
    std::string str="This is pass by pointer";
    printString(&str);
    return 0;
}