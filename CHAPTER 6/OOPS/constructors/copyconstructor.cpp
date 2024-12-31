#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rollno;
    float gpa;
    Student(string s, int r,float g){ //PARAMETERISED CONSTRUCTOR
        name = s;
        rollno = r;
        gpa = g;
    } 
    //copy constructor
    Student(Student &obj){
        name = obj.name;
        rollno = obj.rollno;
        gpa = obj.gpa;
    }
};
int main()
{   
    Student s1("malav",17,8.5);
    cout<<s1.name<<endl;
    cout<<s1.rollno<<endl;
    cout<<s1.gpa<<endl;

    Student s2=s1;
    s2.name="Dhairya"; // deep copy
    cout<<s2.name<<endl;
    cout<<s2.rollno<<endl;
    cout<<s2.gpa<<endl;

    Student s3(s1);//copy constructor - deep copy
    s3.name="Yash";
    cout<<s3.name<<endl;
    cout<<s3.rollno<<endl;
    cout<<s3.gpa<<endl;

    return 0;
}