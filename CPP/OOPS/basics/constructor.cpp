#include<iostream>

using namespace std;

class student1 {
    public:
    string name;
    int age;
    int gender;

    // Default Constructor
    student1(){};

    
    student1(string name, int age, bool gender) {
        this -> name = name;
        this -> age = age;
        this -> gender = gender;
    }
    
    // Deep Copy
    student1(student1 &object) {
       this -> name = object.name;
       this -> age = object.age;
       this -> gender = object.gender;
    }

    void printInfo() {
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }
};

int main()
{
    student1 a("bhargav", 18, 0);
    a.printInfo();
    student1 b = a;
    b.name = "ChandraSena";
    b.gender = 0;
    b.printInfo();
    a.printInfo();
}