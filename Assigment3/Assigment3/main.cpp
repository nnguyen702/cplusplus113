/*
 Name: Ngoc Nguyen
 SID#: 0472702
 Date: 06/19/2018
 Assignment#: 3
 Description: To create a C++ Console application that utilizes looping control structures to create the Fun with Multiplication application.
 */

#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    srand(time(0));
    int num1, num2, ans, guess;
    
    int numProb;
    char response;
    double accuracy;
    do
    {
        int numGuess = 0;
        cout << "How Many Multiplication Problems: ";
        cin >> numProb;
        cout << endl;
        
        for (int x = 1; x <= numProb; x++)
        {
            num1 = rand()%12 + 1;
            num2 = rand()%12 + 1;
            ans = num1*num2;
            do
            {
                cout << num1 << " X " << num2 << " = ";
                cin >> guess;
                numGuess++;
                
            }while(guess != ans);
    
            cout << "Correct!" << endl;
            cout << endl;
        }
            accuracy = ((double)numProb/numGuess)*100;
            cout<< fixed << setprecision(1);
            cout << "Congratulations on Completing your Mission!" << endl;
            cout << endl;
            cout << "Problems: " << numProb << "\t" << "Guesses: " << numGuess << "\t" << "Accuaracy: " << accuracy << "%" << endl;
            cout << endl;
    
            cout << "Go Again!" << endl;
            cin >> response;
            cout << endl;
        
    }while(toupper(response) == 'Y');
    
    cout << "Thank you for using Fun with Multiplication!" << endl;
    cout << endl;
    return 0;
}
