#include<bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
    cin >> t;
    long long chocolate;
    while(t-- > 0) {
        int n;
        cin >> n;
        chocolate = n * 4;
        chocolate += (n * (n-1) / 2) + ((n-1) * (n-2) / 2) + 1;
        cout << chocolate << endl;
    }
}