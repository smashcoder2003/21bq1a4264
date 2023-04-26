#include<iostream>

using namespace std;
class student3 {
    public:
    string name;
    int age;
    bool gender;
    student3(){}

    student3(string name, int age, bool gender) {
        this -> name = name;
        this -> age = age;
        this -> gender = gender;
    }

    void setAge(int age) {
        this -> age = age;
    }

    void setName(string name) {
        this -> name = name;
    }

    void setGender(bool gender) {
        this -> gender = gender;
    }

    string getName() {
        return this -> name;
    }

    int getAge() {
        return this -> age;
    }

    int getGender() {
        return this -> gender;
    }

}; 


int main() {
    student3 a;
    a.setAge(10);
    a.setGender(0);
    a.setName("bhargav");
    cout << a.getName() << endl;
    cout << a.getGender() << endl;
    cout << a.getAge() << endl;
}