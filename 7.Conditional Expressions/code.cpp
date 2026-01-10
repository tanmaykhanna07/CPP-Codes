#include<iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age:\n";
    cin >> age;

    if (age>=18){
        cout << "You are eligible to vote\n";

    } else {
        cout << "Uneligible to vote, grow up lil bro\n";

    }

    return 0;
} 
// else if's can be used instead of elif's in cpp
