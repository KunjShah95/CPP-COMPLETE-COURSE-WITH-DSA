#include<iostream>
using namespace std;
class Cricketer{
    public:
    int runs;
    float avg;
};
class Engineer{
    public:
    int experience;
    string domain;

};
class phodu: public Engineer,Cricketer{ //multiple inheritaance
    public:
    string name;

};
int main()
{
    
    return 0;
}