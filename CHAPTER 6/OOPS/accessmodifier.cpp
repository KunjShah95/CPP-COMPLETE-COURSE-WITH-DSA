#include<iostream>
using namespace std;
class Student{
public:
    int rno;
    string name;
    // void display(){
    //     cout<<name<<" "<<marks<<" "<<rno<<endl;
    // }
    Student(int r,string n,float m){
        rno=r;
        name=n;
        marks=m;
    }
   float getmarks(){ //getter
        return marks;
   }
   void setmarks(float m){ //setter
        marks=m;
   }
private:
    float marks;
};

int main(){
    Student s1(1,"Manushi",91);
    cout<<s1.getmarks()<<endl;
    s1.setmarks(90);
    cout<<s1.getmarks()<<endl;
    
    Student s2(95,"Kunj",94);
    cout<<s2.getmarks()<<endl;
    Student s3(131,"Datri",95);
    cout<<s3.getmarks()<<endl;
    return 0;
}