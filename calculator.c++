// write a c++ program to create a simple calculator

# include <iostream>

using namespace std;

int main()
{
    int x,y,sum;
    cout << "enter value of x" << endl;
    cin >> x;
    
    //getting value of y
    cout << "enetr value of y" <<endl;
    cin >>y;

    //addding two variable 

    cout << "Addition =" << x+y << endl;
    cout << "substraction =" << x-y << endl;
    cout << "Multiplication = " << x*y << endl;
    cout << "Division =" << x/y << endl;  
    cout << "modular division =" << x%y << endl; 
}