#include<iostream>
#include<vector>

using namespace std;

void permute(vector<int> &a, int idx, vector< vector<int> > &ans)
{
    if(idx == a.size())
    {
        ans.push_back(a);
        return;
    }

    for(int i=idx; i<a.size(); i++)
    {
        if(i != idx and a[i] == a[idx])
            continue;
        swap(a[i], a[idx]);
        permute(a, idx+1, ans);
        swap(a[i], a[idx]);
    }
    return;  
}


int main()
{
    int n;
    cin >> n;
    vector< int > a(n);
    vector< vector<int> > ans;

    for(auto &i:a)
    {
        cin >> i;
    }
    permute(a, 0, ans);

    for(auto vec:ans)
    {
        for(auto element:vec)
        {
            cout << element << " ";
        }
        cout << endl;
    }
        
}