#include<iostream>

using namespace std;
class Bird {
    private:
        string species;
    public:
        Bird(){
            cout << "I am Bird's constructor." << endl;
        };
        Bird(string species) {
            this -> species = species;
        }
        void display() {
            cout << this -> species << endl;
        }
        void fly() {
            cout << "I can fly." << endl;
        }
};

class Chick: public Bird {
    public:
    Chick() {
        cout << "I am Chick's constructor" << endl;
    }
};


int main()
{
    Chick obj2;
    obj2.fly();
}