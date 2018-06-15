/*
 Name: Ngoc Nguyen
 SID#: 0472702
 Date: 06/14/2018
 Lab#: 4A
 Description: Using String to write the message, then output some parts of the message using the substring.
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fullname = "Ngoc Thi Kim Nguyen";
    
    cout << "My name is " << fullname.substr(0, 4)<< " " << fullname.substr(13, 6) << endl;
    
    return 0;
}
