#include<iostream>
using namespace std;
class Student{
    public:
    int rollno;
    string name;
    float gpa;
};

int main()
{
    Student s1;
    s1.rollno=1;
    // cin>>s1.rollno;
    s1.name="Manushi";
    s1.gpa=9.5;
    cout<<s1.rollno<<endl;
    cout<<s1.name<<endl;
    cout<<s1.gpa<<endl;
    Student s2;
    s2.rollno=95;
    s2.name="Kunj";
    s2.gpa=9.05;
    cout<<s2.rollno<<endl;
    cout<<s2.name<<endl;
    cout<<s2.gpa<<endl;

    return 0;
}