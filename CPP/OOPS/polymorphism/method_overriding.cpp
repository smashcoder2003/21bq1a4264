#include<iostream>

using namespace std;

class Mammals {
    public:
    virtual void action() {
        cout << "I can walk";
    }
};


class Human: public Mammals {
    void action() {
        cout << "I can walk and swim";
    }
};

int main()
{
    Mammals* ptr;
    Human obj1;
    // passing reference object wit to ptr
    ptr = &obj1;
    
    // Runtime Polymorphism
    ptr -> action();
}