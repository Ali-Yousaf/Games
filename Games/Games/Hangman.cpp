//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//const int MAX_WORD_LENGTH = 100;
//
//void displayWord(const char* word, const char* guessed) 
//{
//    for (int i = 0; word[i] != '\0'; ++i) 
//    {
//        if (guessed[i] != '\0')
//        {
//            cout << word[i] << " ";
//        }
//        else 
//        {
//            cout << "_ ";
//        }
//    }
//    cout << "\n\n";
//}
//
//int main() 
//{
//    char secretWord[MAX_WORD_LENGTH];
//    cout << "Enter a word: "; cin >> secretWord;
//
//    system("CLS");
//
//    char guessed[MAX_WORD_LENGTH];
//    for (int i = 0; secretWord[i] != '\0'; ++i) 
//    {
//        guessed[i] = '\0';
//    }
//
//    int maxAttempts = strlen(secretWord);
//    int attemptsLeft = maxAttempts;
//
//    cout << "Welcome to Hangman!\n\n";
//
//    while (attemptsLeft > 0) 
//    {
//        cout << "Attempts left: " << attemptsLeft << "\n";
//        displayWord(secretWord, guessed);
//
//        char guess;
//        cout << "Enter Your Guess: ";
//        cin >> guess;
//
//        bool found = false;
//        for (int i = 0; secretWord[i] != '\0'; ++i)
//        {
//            if (secretWord[i] == guess) 
//            {
//                guessed[i] = guess;
//                found = true;
//            }
//        }
//
//        if (!found) 
//        {
//            cout << "\nIncorrect guess!\n";
//            attemptsLeft--;
//        }
//        else
//        {
//            cout << "\nCorrect guess!\n";
//        }
//
//        bool allGuessed = true;
//        for (int i = 0; secretWord[i] != '\0'; ++i) 
//        {
//            if (guessed[i] == '\0') {
//                allGuessed = false;
//                break;
//            }
//        }
//
//        if (allGuessed) 
//        {
//            cout << "Congratulations! You guessed the word: " << secretWord << "\n";
//            break;
//        }
//    }
//
//    if (attemptsLeft == 0)
//    {
//        cout << "Sorry, you ran out of attempts. The correct word was: " << secretWord << "\n";
//    }
//
//    return 0;
//}
