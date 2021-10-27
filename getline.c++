// write a c++ program to demostarate get line

#include <iostream>

using namespace std;

int main()
{
    string f_name;
    cout << "Type your full name: ";
    getline (cin, f_name);
    cout << "Your Name is: "<<f_name << endl;
    
}