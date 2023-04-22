#include<bits/stdc++.h>

using namespace std;

bool check(int** arr, int x, int y, int n)
{
    int i, j;
    for(i=y; i>= 0; i--)
    {
        if(arr[x][i] == 1)
            return false;
    }

    i=x;j=y;
    while(i>=0 && j>=0)
    {
        if(arr[i][j] == 1)
            return false;
        i--;j--;
    }
    
    i=x;j=y;
    while(i<n && j>=0)
    {
        if(arr[i][j] == 1)
            return false;
        i++;j--;
    }
    return true;

}

bool nQueens(int** solution, int col, int n)
{
    if(col == n)
        return true;

    for(int i=0; i<n; i++)
    {
        if(check(solution, i, col, n))
        {
            solution[i][col] = 1;

            if(nQueens(solution, col+1, n))
                return true;

            solution[i][col] = 0;
        }
    }

    return false;
}

void printBoard(int** arr, int n)
{
    cout << endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the dimension of the array: ";
    cin >> n;

    int** solution = new int* [n];

    for(int i=0; i<n;i++)
    {
        solution[i] = new int[n];
        for(int j=0; j<n; j++)
        {
            solution[i][j] = 0;
        }
    }

    if(nQueens(solution, 0, n))
        printBoard(solution, n);
    else   
        cout << "There is no solution. ";

    delete[] solution;
}
