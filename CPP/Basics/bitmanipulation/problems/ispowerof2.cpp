#include<iostream> 

using namespace std;
bool powerof2(int number)
{
    return number && !(number &  number-1);
}
int main() 
{
    int number;
    cout << "enter a number: ";
    cin >> number;
    cout << powerof2(number);
}