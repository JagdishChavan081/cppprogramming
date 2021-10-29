# include<iostream>

using namespace std;

int main()

{
    //user input
    string txt1 , txt2;
    cout << "enter text 1";
    cin >> txt1;
    cout << "enter text 2";
    cin >> txt2;

    //if condition
    if (txt1.length() > txt2.length())
    {
        cout << "txt1 is longer than txt2 by :" << txt1.length()-txt2.length() << endl;
    }
    //else condition
    else
    {
        cout << "txt2 is longer than lxt1 by :" << txt2.length()-txt1.length() << endl;
    }
}