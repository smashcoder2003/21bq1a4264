#include<iostream>

using namespace std;

class Friends {
    public:
    string name;
    
    Friends(string name) {
        this -> name = name;
    }

    void operator +(Friends obj1) {
            cout << name << " and " << obj1.name << " are friends.";
    }
};


int main() 
{
    Friends obj1("bhargav");
    Friends obj2("ChandraSena");
    obj1 + obj2;
}