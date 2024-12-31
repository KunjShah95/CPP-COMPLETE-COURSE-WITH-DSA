#include <iostream>
using namespace std;
std::string getGreeting() {
    return "This is  C++";
}

int main() {
    std::string greeting = getGreeting();
    std::cout << greeting << std::endl;
    return 0;
}
