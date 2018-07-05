/*
 Name: Ngoc Nguyen
 SID#: 0472702
 Date: 07/02/2018
 Assignment#: 4
 Description: To create a C++ Console application that utilizes selection control to create the High Low GuessingGame.
 */

#include <iostream>

#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    char response;
    do
    {
        
        int secret = rand()%100 + 1;
        int guess;
        int numGuess = 0;
    
        cout << "I'm thinking of a number between 1 and 100" << endl;
        do
        {
            cout << "Enter Guess: ";
            cin >> guess;
            
            if (guess > secret)
            {
                cout << "Too High" << endl;
                numGuess++;
            }
            else if( guess < secret)
            {
                cout << "Too Low" << endl;
                numGuess++;
            }
        }while (guess != secret);
            cout << "Eureka you got it in " << numGuess << " guesses" << endl;
        
        if (numGuess > 7)
            cout << "You are a below average player. Don't quit your day job." << endl;
        else if (numGuess >=5)
            cout << "You are an average player. Keep practicing." << endl;
        else
            cout << "You are an above average player. You must be psychic." << endl;
                
        cout << "Play Again? Y/N: ";
        cin >> response;
                
    }while(toupper(response) == 'Y');
    
    return 0;
}
