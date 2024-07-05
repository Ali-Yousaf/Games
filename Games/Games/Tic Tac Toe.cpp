//#include <iostream>
//using namespace std;
//
//const int BOARD_SIZE = 3;
//
//void displayBoard(char board[BOARD_SIZE][BOARD_SIZE])
//{
//	cout << "-------------" << endl;
//	for (int i = 0; i < BOARD_SIZE; ++i)
//	{
//		cout << "| ";
//
//		for (int j = 0; j < BOARD_SIZE; ++j)
//		{
//			cout << board[i][j] << " | ";
//		}
//		cout << endl << "-------------" << endl;
//	}
//}
//
//bool checkWin(char board[3][3], char player)
//{
//	bool win = false;
//
//	if ((board[0][0] == player && board[0][1] == player && board[0][2] == player) || (board[1][0] == player && board[1][1] == player && board[1][2] == player) || (board[2][0] == player && board[2][1] == player && board[2][2] == player))
//		win = true;
//
//	else if ((board[0][0] == player && board[1][0] == player && board[2][0] == player) || (board[0][1] == player && board[1][1] == player && board[2][1] == player) || (board[0][2] == player && board[1][2] == player && board[2][2] == player))
//		win = true;
//
//	else if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) || (board[0][2] == player && board[1][1] == player && board[2][0] == player))
//		win = true;
//
//	return win;
//}
//
//bool fullBoard(char board[3][3])
//{
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if (board[i][j] == ' ')
//				return false;
//		}
//	}
//
//	return true;
//}
//
//void play()
//{
//	char board[BOARD_SIZE][BOARD_SIZE] = { { ' ', ' ', ' ' },
//										   { ' ', ' ', ' ' },
//										   { ' ', ' ', ' ' } };
//	displayBoard(board);
//
//	char p1 = 'X';
//	char p2 = 'O';
//
//	int row = 0;
//	int col = 0;
//	bool win = false;
//
//	while (true)
//	{
//
//		//------------------------------ PLAYER 1 ------------------------------ 
//
//		cout << "Player X, Enter your move (row, column): "; cin >> row >> col;
//		if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
//		{
//			cout << "Invalid move. Try again." << endl;
//			continue;
//		}
//
//		board[row][col] = p1;
//		displayBoard(board);
//
//		if (fullBoard(board) && !checkWin(board, p1))
//		{
//			displayBoard(board);
//			cout << "It's a tie!" << endl;
//			break;
//		}
//
//		if (checkWin(board, p1))
//		{
//			cout << "PLAYER X WINS! ";
//			break;
//		}
//
//		//------------------------------ PLAYER 2 ------------------------------ 
//	p2Turn:
//		cout << "Player O, Enter your move (row, column): "; cin >> row >> col;
//		if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ')
//		{
//			cout << "Invalid move. Try again." << endl;
//			goto p2Turn;
//		}
//
//		board[row][col] = p2;
//		displayBoard(board);
//
//		if (fullBoard(board) && !checkWin(board, p2))
//		{
//			cout << "It's a tie!" << endl;
//			break;
//		}
//
//		if (checkWin(board, p2))
//		{
//			cout << "PLAYER 0 WINS! ";
//			break;
//		}
//	}
//}
//
//int main()
//{
//
//	cout << "---------- WELCOME TO TIC TAC TOE ----------\n\n\n";
//
//	play();
//
//	cout << endl;
//	return 0;
//}