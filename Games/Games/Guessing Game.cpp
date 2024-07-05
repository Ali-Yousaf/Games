//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//void switchStatement(int& difficultyLvl, int& lives)
//{
//	switch (difficultyLvl)
//	{
//	case 1: cout << "\n --- Very Easy ---\n"; lives = 5; break;
//
//	case 2: cout << "\n --- Easy ---\n"; lives = 4; break;
//
//	case 3: cout << "\n --- Hard ---\n"; lives = 3; break;
//
//	case 4: cout << "\n --- Very Hard ---\n"; lives = 2; break;
//
//	case 5: cout << "\n --- Impossible ---\n"; lives = 1; break;
//	}
//}
//int main()
//{
//	srand(time(0));
//
//	char choice;
//	int difficultyLvl = 0;
//	int number = 0;
//	int guess = 0;
//	int lives = 0;
//
//	do
//	{
//		cout << "Enter Difficulty Level (1 - 5): "; cin >> difficultyLvl;
//		if (difficultyLvl > 5)
//		{
//			cout << "Enter Correct: ";
//			return 0;
//		}
//
//		switchStatement(difficultyLvl, lives);
//
//		number = rand() % (difficultyLvl * 10);
//
//		cout << " Total Lives: " << lives;
//		cout << "\n\nEnter Your Guess (1 - " << difficultyLvl * 10 << "): "; cin >> guess;
//
//		while (true)
//		{
//
//			if (guess == number)
//			{
//				cout << "\nCongrats! You Guessed It";
//				break;
//			}
//
//			else if (guess != number)
//			{
//
//				if (guess > number) cout << "\nIncorrect! Your guess is too high";
//
//				else cout << "\nIncorrect! Your guess is too low";
//
//				cout << "\nLives Remaining: " << --lives;
//
//				if (lives < 1)
//				{
//					cout << "\n\nCorrect number is: " << number;
//					break;
//				}
//
//				cout << "\n\nEnter Again: ";
//				cin >> guess;
//
//			}
//		}
//
//		Sleep(3500);
//		system("CLS");
//
//		cout << "Do you want to play again? Press Y for YES | Press N for NO: "; cin >> choice;
//
//		if (choice == 'Y' || choice == 'y')
//			switchStatement(difficultyLvl, lives);
//
//		cout << endl;
//
//	} while (choice == 'Y' || choice == 'y');
//
//	cout << "\n\n ---------- THANKS FOR PLAYING ----------" << endl;
//
//	return 0;
//}