#include<iostream>

using namespace std;
class student {
    public:
    string name;
    int age;
    bool gender;
    
    void printInfo() {
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }
};

int main()
{
    student a;
    cin >> a.name;
    cin >> a.age;
    cin >> a.gender;
    a.printInfo();
}