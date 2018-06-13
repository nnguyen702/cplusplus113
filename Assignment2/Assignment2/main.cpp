/*
 Name: Ngoc Nguyen
 SID#: 0472702
 Date: 06/13/2018
 Asignment#: 2
 Description: To create a C++console application that generates a simple Fahrenheit to Celsius conversion table based on user input. */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int fah;
    double cel;
    int start;
    int stop;
    int step;
    cout << "Enter Start Fahrenheit: ";
    cin >> start;
    cout << "Enter Stop Fahrenheit: ";
    cin >> stop;
    cout << "Enter Step: ";
    cin >> step;
    cout << endl;
    
    cout << "Fah" << "\t\t" << "Cel"<< endl;
    cout << "---" << "\t\t" << "---"<<endl;

    for(fah = start; fah <= stop; fah += step)
    {
        cel = 5*((double)fah-32)/9;
        cout << fixed << setprecision(1);
        cout << fah << "\t\t" <<cel ;
        cout << endl;
        
    
    }
    return 0;
}
