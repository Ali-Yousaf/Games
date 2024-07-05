//#include <iostream>
//using namespace std;
//
//const int BOARD_SIZE = 3;
//
//void convertInput(int input, int& r, int& c)
//{
//
//	switch (input)
//	{
//	case 1:
//		r = 0;
//		c = 0;
//		break;
//
//	case 2:
//		r = 0;
//		c = 1;
//		break;
//
//	case 3:
//		r = 0;
//		c = 2;
//		break;
//
//	case 4:
//		r = 1;
//		c = 0;
//		break;
//
//	case 5:
//		r = 1;
//		c = 1;
//		break;
//
//	case 6:
//		r = 1;
//		c = 2;
//		break;
//
//	case 7:
//		r = 2;
//		c = 0;
//		break;
//
//	case 8:
//		r = 2;
//		c = 1;
//		break;
//
//	case 9:
//		r = 2;
//		c = 2;
//		break;
//
//	default:
//		cout << "\nWrong Input!\n";
//		r = -1;
//		c = -1;
//		return;
//	}
//
//}
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
//	int Xinput = 0;
//	int Oinput = 0;
//	int row = 0;
//	int col = 0;
//	bool win = false;
//
//	while (true)
//	{
//
//		//------------------------------ PLAYER 1 ------------------------------ 
//
//		cout << "Player X, Enter your move (1 - 9): "; cin >> Xinput;
//
//		convertInput(Xinput, row, col);
//
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
//		cout << "Player O, Enter your move (1 - 9): "; cin >> Oinput;
//
//		convertInput(Oinput, row, col);
//
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