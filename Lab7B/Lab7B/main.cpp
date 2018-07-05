/*
 Name: Ngoc Nguyen
 SID#: 0472702
 Date: 07/04/2018
 Lab#: 7B
 Description: To create a C++ Console application that utilizes conditional statement
 */

#include <iostream>

using namespace std;

int main()
{
    int grade;
    cout << "Enter Your Grade: ";
    cin >> grade;
    cout << "You " << ( grade >= 70 ? "PASS" : "DO NOT PASS" ) << " this class." << endl;
    
    return 0;
}

