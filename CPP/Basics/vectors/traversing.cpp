#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> a;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    for(int i=0; i<a.size(); i++)
        cout << a[i] << "\t";
    cout << endl;

    for(auto element:a)
        cout << element << "\t";
}