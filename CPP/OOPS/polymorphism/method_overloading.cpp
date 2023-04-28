#include<iostream>

using namespace std;
// Compile Time Polymorhpism
class Types {
    public:
    Types() {
        cout << "I am default constructor.";
    }
    Types(string s) {
        cout << "I am string constructor.";
    }
    Types(int a) {
        cout << "I am integer constructor.";
    }
};


int main()
{
    Types obj1;
    Types obj2("bhargav");
    Types obj3(123);
}