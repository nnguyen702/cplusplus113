/*
 Name: Ngoc Nguyen
 SID#: 0472702
 Date: 07/04/2018
 Lab#: 7A
 Description: To create a C++ Console application that utilizes switch statement
 */

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    char opCode;
    cout << "Enter Math Operator (+, -, *, /): ";
    cin >> opCode;
    cout << "Enter First Operand: ";
    cin >> num1;
    cout << "Enter Second Operand: ";
    cin >> num2;
    
    switch (opCode) {
        case '+':
            cout << num1 << " plus " << num2 << " equals " << num1+num2 << endl;
            break;
        case '-':
            cout << num1 << " minus " << num2 << " equals " << num1-num2 << endl;
            break;
        case '*':
            cout << num1 << " times " << num2 << " equals " << num1*num2 << endl;
            break;
        case '/':
            cout << num1 << " divides " << num2 << " equals " << num1/num2 << endl;
            break;
        default:
            cout << "Not Valid Operator" << endl;
            break;
    }
    
return 0;
}
