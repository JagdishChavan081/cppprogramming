// write a c++ program to demonstrate use of if  elseif, else 

#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "enter your age";
    cin >> age;

    if (age>0 && age<=4)
    {
        cout << "no ticket required" << endl;
    }

    //else if condition
    else if (age>4 && age<=65)
    {
        cout << "full ticket aplicable" << endl;
    }

    //second elif condition
    else if (age >65 && age<=100)
    {
        cout << "seniour citizen discount" << endl;
    }

    // third elif condition 
    else if (age>100)
    {
        cout << "please give valid input" << endl;
    }

    //else block
    else 
    {
        cout << "something is wrong" << endl;
    }
}