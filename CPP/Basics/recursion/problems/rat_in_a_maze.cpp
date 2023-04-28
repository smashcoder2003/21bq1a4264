#include<iostream>

using namespace std;

bool isSafe(int** arr, int x, int y, int n)
{
    if(x < n && y < n &&  arr[x][y] == 1)
        return true;
    return false;
}

bool ratInMaze(int** arr, int x, int y,int n, int** solution)
{
    if(x==n-1 && y==n-1){
        solution[x][y] = 1;
        return true;
    }

    if(isSafe(arr, x, y, n))
    {
        solution[x][y] = 1;
        if(ratInMaze(arr, x+1, y, n, solution))
        return true;

        else if(ratInMaze(arr, x , y+1, n, solution))
        return true;

        solution[x][y] = 0;
        return false;
    }
    return false; 
}


void printMazeWay(int** arr, int n)
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
    cout << "Enter the dimensions of the array: ";
    cin >> n;
    
    int** arr = new int* [n];
    int** solution = new int* [n];
    
    for(int i=0; i<n; i++)
    {
        arr[i] = new int[n];
        solution[i] = new int[n];

        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
            solution[i][j] = 0;
        }
            
    }
     
    if(ratInMaze(arr, 0, 0, n, solution))
    {
        printMazeWay(solution, n);
    }
    else    
        cout << "There is no solution for the maze.";

    delete[] solution;
    delete[] arr;
}