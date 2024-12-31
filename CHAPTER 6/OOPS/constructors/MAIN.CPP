#include<iostream>
#include<string>
#include<fstream>
#include<vector>

using namespace std;

class College {
private:
    string name;
    int mobile_number;
    string email_id;
    string address;
    string city;
    string state;
    int pincode;
    string course;
    float gpa;

public:
    College() {} // default constructor
    College(string n, int mn, string ei, string a, string c, string s, int p, string co, float g) {
        name = n;
        mobile_number = mn;
        email_id = ei;
        address = a;
        city = c;
        state = s;
        pincode = p;
        course = co;
        gpa = g;
    }

    // getters and setters
    string getName() { return name; }
    void setName(string n) { name = n; }

    int getMobileNumber() { return mobile_number; }
    void setMobileNumber(int mn) { mobile_number = mn; }

    string getEmailId() { return email_id; }
    void setEmailId(string ei) { email_id = ei; }

    string getAddress() { return address; }
    void setAddress(string a) { address = a; }

    string getCity() { return city; }
    void setCity(string c) { city = c; }

    string getState() { return state; }
    void setState(string s) { state = s; }

    int getPincode() { return pincode; }
    void setPincode(int p) { pincode = p; }

    string getCourse() { return course; }
    void setCourse(string co) { course = co; }

    float getGPA() { return gpa; }
    void setGPA(float g) { gpa = g; }

    // additional methods
    void display() {
        cout << "Name: " << name << endl;
        cout << "Mobile Number: " << mobile_number << endl;
        cout << "Email ID: " << email_id << endl;
        cout << "Address: " << address << endl;
        cout << "City: " << city << endl;
        cout << "State: " << state << endl;
        cout << "Pincode: " << pincode << endl;
        cout << "Course: " << course << endl;
        cout << "GPA: " << gpa << endl;
    }

    void calculateAge() {
        // calculate age based on date of birth
    }

    void calculateDuration() {
        // calculate duration of stay in college based on date of admission
    }

    void searchStudent(string n) {
        // search for student based on name
    }

    void sortStudents(vector<College> students) {
        // sort students based on GPA/CGPA
    }

        void writeToFile(string filename) {
        // write student data to a file
        ofstream file(filename);
        file << "Name: " << name << endl;
        file << "Mobile Number: " << mobile_number << endl;
        file << "Email ID: " << email_id << endl;
        file << "Address: " << address << endl;
        file << "City: " << city << endl;
        file << "State: " << state << endl;
        file << "Pincode: " << pincode << endl;
        file << "Course: " << course << endl;
        file << "GPA: " << gpa << endl;
        file.close();
    }

    void readFromFile(string filename) {
        // read student data from a file
        ifstream file(filename);
        file >> name >> mobile_number >> email_id >> address >> city >> state >> pincode >> course >> gpa;
        file.close();
    }
};

int main() {
    College c1("ABC", 1234567890, "abc@abc", "ABC Street", "ABC City", "ABC State", 123456, "BSc", 8.5);
    c1.display();
    c1.writeToFile("student_data.txt");
    return 0;
}