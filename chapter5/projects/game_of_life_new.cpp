/**
 * @file game_of_life_new.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-04
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Set the board size and the number of generations to simulate
const int ROWS = 20;
const int COLS = 20;
const int NUM_GENERATIONS = 10;

// Helper function prototypes
void initBoard(vector<vector<int>>& board);
void printBoard(const vector<vector<int>>& board);
void saveBoard(const vector<vector<int>>& board, const string& filename);
void updateBoard(vector<vector<int>>& board);

//main function prototype
int main(int argc, char* argv[]);

// Helper function to initialize the board with random values
void initBoard(vector<vector<int>>& board)
{
    srand(time(NULL));
    for (int i = 0; i < ROWS; i++)
    {
        vector<int> row;
        for (int j = 0; j < COLS; j++)
        {
            row.push_back(rand() % 2);
        }
        board.push_back(row);
    }
}

// Helper function to print the board to the console
void printBoard(const vector<vector<int>>& board)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (board[i][j] == 1)
            {
                cout << "# ";
            }
            else
            {
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

// Helper function to save the board data to a file
void saveBoard(const vector<vector<int>>& board, const string& filename)
{
    ofstream outfile;
    outfile.open(filename);
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            outfile << board[i][j] << " ";
        }
        outfile << endl;
    }
    outfile.close();
}

// Helper function to count the number of live neighbors for a given cell
int countLiveNeighbors(const vector<vector<int>>& board, int row, int col)
{
    int count = 0;
    for (int i = row - 1; i <= row + 1; i++)
    {
        for (int j = col - 1; j <= col + 1; j++)
        {
            int r = (i + ROWS) % ROWS;
            int c = (j + COLS) % COLS;
            if (board[r][c] == 1 && !(r == row && c == col))
            {
                count++;
            }
        }
    }
    return count;
}

// Helper function to simulate one generation of the game
void simulateGeneration(vector<vector<int>>& board)
{
    vector<vector<int>> newBoard = board;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            int liveNeighbors = countLiveNeighbors(board, i, j);
            if (board[i][j] == 1)
            {
                if (liveNeighbors < 2 || liveNeighbors > 3)
                {
                    newBoard[i][j] = 0;
                }
            }
            else
            {
                if (liveNeighbors == 3)
                {
                    newBoard[i][j] = 1;
                }
            }
        }
    }
    board = newBoard;
}

int main(int argc, char* argv[])
{
    vector<vector<int>> board;
    initBoard(board);
    for (int i = 0; i < NUM_GENERATIONS; i++)
    {
        printBoard(board);
        string filename = "Life_Data_" + to_string(i) + ".dat";
        saveBoard(board, filename);
        simulateGeneration(board);
    }
    return 0;
}

