#include<iostream>
using namespace std;

int main()
{
    int a = 10;

    int b = a++; // first b gets the value of a ie 10 and then a gets updated to 11 so b is 10 and a is 11. Pehle Kaam then update. If the operation was ++a instead of a++ then a gets updated first then b gets the value of a making both 11. For decrement -- is used.

    cout << a << endl;
    cout << b << endl;
    return 0;
}