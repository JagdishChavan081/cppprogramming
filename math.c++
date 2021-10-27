//write a c++ program to display math lib use in c++

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x = 5;
    int y = 10;
    int a = 64;
    float b = 3.14;

    //print max of given number
    cout << max(x,y) << endl;

    //print min of given number
    cout << min(x,y) << endl;

    // print square root of given number
    cout << sqrt(a) << endl;

    //print roundoff value 
    cout << round(b) << endl;

    //log of 2
    cout << log(2) << endl;

}