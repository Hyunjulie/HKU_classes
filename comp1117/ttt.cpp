// 1117B Workshop 6 Tic-Tac-Toe
#include <iostream>
using namespace std;

// Printing the board
void print (int input[3][3])
{
    cout << "   |   |   \n";
    cout << " " << input[0][0] << " | " << input[0][1] << " | " << input[0][2] << endl;
    cout << "---|---|---\n";
    cout << " " << input[1][0] << " | " << input[1][1] << " | " << input[1][2] << endl;
    cout << "---|---|---\n";
    cout << " " << input[2][0] << " | " << input[2][1] << " | " << input[2][2] << endl;
    cout << "   |   |   \n";
}

int win (int input[3][3])
{
    // horizontal line
    for (int i = 0; i < 3; i++)
        if (input[i][0] == input [i][1] && input[i][0] == input[i][2] && input[i][0] != 0)
            return input[i][0];
    // vertical line
    for (int i = 0; i < 3; i++)
        if (input[0][i] == input [1][i] && input[0][i] == input[2][i] && input[0][i] != 0)
            return input[0][i];

    // diagonal line
    if (input[0][0] == input[1][1] && input[0][0] == input[2][2] && input[0][0] != 0)
        return input[0][0];

    if (input[0][2] == input[1][1] && input[0][2] == input[2][0] && input[0][2] != 0)
        return input[0][2];

    return 0;
}

int main()
{
    int board[3][3] = {};
    int player = 0;

    for (int i = 0; i < 9 && (win(board) == 0); i++)
    {
        print(board);
        int a, b;
        a = b = 0;
        player = i % 2 + 1;

        cout << "Player " << player << "'s turn, please select a cell: ";
        cin >> a >> b;
        while(board[a][b] != 0 || a < 0 || a > 2 || b < 0 || b > 2)
        {
            cout << "Player " << player << "'s turn, please select a cell: ";
            cin >> a >> b;
        };
        board[a][b] = player;
    }

    print(board);
    if (win(board) == 0)
        cout << "Draw!\n";
    else
        cout << "Player " << win(board) << " is the winner!\n";

    return 0;
}
