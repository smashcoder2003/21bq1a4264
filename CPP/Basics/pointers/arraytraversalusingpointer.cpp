#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[3];
    for(int i=0; i<3; i++)
    {
        *(arr+i) = i+1; // *(arr) is and special index pointer.
    }

    for(int i=0; i<3; i++)
        cout << arr[i];
}