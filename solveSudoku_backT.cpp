#include <bits/stdc++.h>

bool isSafe(int row, int col, vector<vector<int>>& board, int k, int n)
{

    for(int i=0;i<n;i++)
    {
        if(board[row][i] == k)
            return false;

        if(board[i][col] == k)
            return false;

        if(board[3*(row/3) + i/3][3*(col/3) + i%3] == k)
            return false;
    }
    return true;
}

 

bool solve(vector<vector<int>>& board)
{
    int n = board[0].size();

    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n;col++)
        {
            //empty
            if(board[row][col] == 0)
            {
                for(int value = 1; value <=n; value++)
                {
                    if(isSafe(row, col, board, value, n))
                    {
                        board[row][col] = value;
                        bool possolution = solve(board);
                        if(possolution)
                        {
                            return true;
                        }   
                        else
                        {
                            //backtrack
                            board[row][col] = 0;
                        }
                    }               
                }
                return false;
            }
        }
    }
    return true;
}

void solveSudoku(vector<vector<int>>& sudoku)
{
// Write your code here
// No need to print the final sudoku
// Just fill the values in the given matrix
solve(sudoku);
}
