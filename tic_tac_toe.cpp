#include <iostream>
#include <vector>
using namespace std;

void Tic_Tac_Toe_Board(vector<vector<char>> &Board)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Board[i][j] = ' ';
        }
    }
}

void printboard(vector<vector<char>> &Board)
{
    for (int i = 0; i < 3; i++)
    {
        cout << "___________" << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << Board[i][j] << " | ";
        }
        cout << endl;
    }
}

int check(vector<vector<char>> &Board, char x)
{
    for (int i = 0; i < 3; i++)
    {
        if ((Board[i][0] == x) && (Board[i][1] == x) && (Board[i][2] == x))
        {
            return 1;
        }
        else if ((Board[0][i] == x) && (Board[1][i] == x) && (Board[2][i] == x))
        {
            return 1;
        }
    }
    if ((Board[0][0] == x) && (Board[1][1] == x) && (Board[2][2] == x))
    {
        return 1;
    }
    else if ((Board[0][2] == x) && (Board[1][1] == x) && (Board[2][0] == x))
    {
        return 1;
    }
    return 0;
};

int main()
{
    vector<vector<char>> tic_tac_toe_Board(3, vector<char>(3));
    Tic_Tac_Toe_Board(tic_tac_toe_Board);

    int row, coloum;
    int turn = 0;
    cout << " !!  Welcome Back in  " << endl;
    cout << "Tic Tac Toe Game" << endl;
    cout << "Starting......." << endl;
    while (turn < 9)
    {
        printboard(tic_tac_toe_Board);

        while (true)
        {
            if (turn % 2 == 0)
            {
                cout << "First player Enter the : X" << endl;
                cin >> row >> coloum;
                if (row >= 1 && row <= 3 && coloum >= 1 && coloum <= 3 && tic_tac_toe_Board[row - 1][coloum - 1] == ' ')
                {
                    tic_tac_toe_Board[row - 1][coloum - 1] = 'X';
                    break;
                }
                else
                {
                    cout << "Invalid move. Try again." << endl;
                }
            }
            else
            {
                cout << " Second Player Enter the : O" << endl;
                cin >> row >> coloum;
                if (row >= 1 && row <= 3 && coloum >= 1 && coloum <= 3 && tic_tac_toe_Board[row - 1][coloum - 1] == ' ')
                {
                    tic_tac_toe_Board[row - 1][coloum - 1] = 'O';
                    break;
                }
                else
                {
                    cout << "Invalid move. Try again." << endl;
                }
            }
        }

        if (check(tic_tac_toe_Board, 'X'))
        {
            cout << " Player X wins" << endl;
            return 0;
        }
        else if (check(tic_tac_toe_Board, 'O'))
        {
            cout << "Player O Wins" << endl;
            return 0;
        }
        turn++;
    }

    // Draw condition when the condition is mismatched
    if (turn == 9)
    {
        cout << "Game Draw" << endl;
        cout<<"Again Start the game"<<endl;

    }

    return 0;
}
//THIS CODE SUMBITED BY
// RAJ SINGH 