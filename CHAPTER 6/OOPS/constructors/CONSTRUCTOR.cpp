#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    int rollno;
    float gpa;
    Student(string s, int r, float g){ //PARAMETERISED CONSTRUCTOR
        name = s;
        rollno = r;
        gpa = g;
    } // parameterised constructor
    Student(string s, int r){ // this is the constructor causing the issue
        name = s;
        rollno = r;
        gpa = 0.0; // need to initialize gpa
    }//multipe constructor
    Student(int r){ //multiple constructor
        rollno = r;
    }
};
   // Student(){} //default constructor
   
int main()
{
    Student s1("Manushi Shah",1,9.5);
    // s1.rollno=1;
    // s1.name="Manushi";
    // s1.gpa=9.5;
    cout<<s1.name<<endl;
    cout<<s1.rollno<<endl;
    cout<<s1.gpa<<endl;

    Student s2("Kunj Shah",95,9.05);
    // s2.rollno=95;
    // s2.name="Kunj";
    // s2.gpa=9.5;
    cout<<s2.name<<endl;
    cout<<s2.rollno<<endl;
    cout<<s2.gpa<<endl;
    
    Student s3("Datri",131,9.1);
    cout<<s3.name<<endl;
    cout<<s3.rollno<<endl;
    cout<<s3.gpa<<endl;

    Student s4(001);
    cout<<s4.rollno<<endl;

    return 0;
}    