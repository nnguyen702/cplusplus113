/*
 Name: Ngoc Nguyen
 SID#: 0472702
 Date: 07/02/2018
 Assignment#: 4
 Description: To create a C++ Console application that utilizes selection control to create the ‘Menu Driven Banking' application.
 */

#include <iostream>

#include <string>

using namespace std;

int main()
{
    double balance = 0;
    string customerName;
    string accountNum;
    char choice;
    cout << "Enter Your Name: ";
    getline(cin, customerName);
    cout << "Enter Your Account Number: ";
    getline(cin, accountNum);
    cout << endl;
    do
    {
    cout << "Menu Driven Banking:" << endl;
    cout << "A.Deposit" << endl;
    cout << "B.Withdrawal" << endl;
    cout << "C.Show Balance" << endl;
    cout << "Q.Quit" << endl;
    cout << endl;

    
    cout << "Choose Your Action: ";
    cin >> choice;
    
    switch (toupper(choice))
    {
        case 'A':
            double deposit;
            cout << "Enter Your Adding Amount: ";
            cin >> deposit;
            cout << "Your Balane Now is " << (deposit>0 ? balance+=deposit : balance+=0)<< endl;
            cout << endl;

            break;
        case 'B':
            double subAmount;
            cout << "Enter Your Subtracting Amount: ";
            cin >> subAmount;
            cout << "Your Balane Now is " << (subAmount>0 ? balance-=subAmount : balance-=0)<< endl;
            cout << endl;
            break;
        case 'C':
            cout << "Customer Name: " << customerName << endl;
            cout << "Account Number: XXXX-" << accountNum.substr(accountNum.length() - 4)<< endl;
            cout << "Account Balance: "<<balance << endl;
            cout << endl;

            break;
        case 'Q':
            cout << "Thank You For Using Driven Banking!" << endl;
            break;
        default:
            cout << "Not Valid" << endl;
            break;
    }
    }while(toupper(choice)!='Q');
        cout << "Have A Great Day!" << endl;
    
    return 0;
}
