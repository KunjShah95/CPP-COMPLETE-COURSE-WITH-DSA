#include<iostream>
using namespace std;
class Fraction{
    public:
    int num;
    int den;
    Fraction(int num,int den){
        this->num=num;
        this->den=den;
    }
    void display(){
        cout<<this->num<<"/"<<this->den<<endl;
    }
    Fraction operator +(Fraction f){
        int newNum = this->num+f.den + f.num+this->den;
        int newDen = this->den*f.den;
        Fraction f3(newNum,newDen);
        return f3;
    }
    
    };

int main()
{
    Fraction f1(10, 2);
    Fraction f2(15, 4);
    f1.display();
    f2.display();
    Fraction f3 = f1 + f2;
    
    f3.display();
    return 0;
}