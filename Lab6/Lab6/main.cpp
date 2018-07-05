/*
 Name: Ngoc Nguyen
 SID#: 0472702
 Date: 07/01/2018
 Lab#: 6
 Description: To create a C++ Console application that utilizes multiple alternative selection control
 */

#include <iostream>

#include <iomanip>

using namespace std;

int main()
{
    double weight, height;
    double BMI;
    cout << "Enter Your Weight(lb): ";
    cin >> weight;
    cout << "Enter Your Height(in): ";
    cin >> height;
    
    BMI = weight/(height*height)*703;
    cout << fixed << setprecision(1);
    cout << "Body Mass Index is: "<<BMI << endl;
    if (BMI >= 30)
        cout << "Obisity" << endl;
    else if ( BMI >= 25)
        cout << "Overweight" << endl;
    else if ( BMI >= 18.5)
        cout << "Normal Weight" << endl;
    else
        cout << "Underweight" << endl;

    return 0;
}
