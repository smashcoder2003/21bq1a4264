#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> board(n, vector<string>(n, "."));
        vector<vector<string>> ans;

        this->Nqueens(board, 0, ans);
        return ans;
    }

    bool safe(vector<vector<string>> &board, int i, int col)
    {
        int z, k;
        for (z = col; z >= 0; --z)
        {
            if (board[i][z] == "Q")
                return false;
        }

        z = col;
        k = i;
        while (z >= 0 && k < board.size())
        {
            if (board[k][z] == "Q")
                return false;
            --z;
            ++k;
        }

        z = col;
        k = i;
        while (z >= 0 && k >= 0)
        {
            if (board[k][z] == "Q")
                return false;
            --z;
            --k;
        }

        return true;
    }

    void Nqueens(vector<vector<string>> &board, int col, vector<vector<string>> &ans)
    {

        for (int i = 0; i < board.size(); ++i)
        {
            if (col == board.size())
            {
                vector<string> oneDVector;
                for (const vector<string> innerVector : board)
                {
                    string combinedString = "";
                    for (const string str : innerVector)
                    {
                        combinedString += str;
                    }
                    oneDVector.push_back(combinedString);
                }
                ans.push_back(oneDVector);
                return;
            }

            if (this->safe(board, i, col))
            {
                board[i][col] = "Q";
                Nqueens(board, col + 1, ans);
                board[i][col] = ".";
            }
        }
    }
};

int main()
{
    Solution obj1;

    for (vector<string> vec : obj1.solveNQueens(4))
    {
        for (string str : vec)
        {
            std::cout << str << std::endl;
        }
        std::cout << std::endl
                  << std::endl;
    }
}