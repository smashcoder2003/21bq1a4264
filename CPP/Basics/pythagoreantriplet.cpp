#include<iostream>
#include<math.h>

using namespace std;

bool pythagoreanTriplets(int a, int b, int c) {
    if (pow(a,2) + pow(b,2) == pow(c,2))
            return true;  
    else 
        return false;
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if (pythagoreanTriplets(a, b, c)) cout << "pythagoreanTriplets";
    else cout << "not pythagoreanTriplets"; 
    
}