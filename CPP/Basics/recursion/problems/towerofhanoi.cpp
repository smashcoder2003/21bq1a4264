#include<iostream>

using namespace std;

void hanoi(int n, int src, int dest){
    if(n==0)
        return; // base case
    int helper = 6 - (src + dest);
    hanoi(n-1, src, helper);
    cout << "move top disc from " << char(src + 'A' - 1) << " to " << char(dest + 'A' - 1) << endl;
    hanoi(n-1, helper, dest);
}
int main()
{
    hanoi(3, 1, 2);
}