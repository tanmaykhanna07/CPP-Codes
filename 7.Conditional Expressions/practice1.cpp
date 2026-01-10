//if char is uppercase or lowercase


#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter character :";
    cin >> ch;
    if (ch>='a' and ch <= 'z'){
        cout << "Character is lowercase";
    } else {
        cout << "Character is uppercase" ;
    } // AscII values directly can also be used

    return 0;
}