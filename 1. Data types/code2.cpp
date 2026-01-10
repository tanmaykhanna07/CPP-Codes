#include<iostream>
using namespace std;

int main()
{
    int age = 25;
    char initials = 'T';
    float PI = 3.14f;// if the f in the end is not mentioned the variable is considered a double
    bool isSafe = true; // true --> 1 and false --> 0 in memory
    double price = 100.99; // double the memory size of float which is 8 bytes and any decimal number in cpp is double unless mentioned as float
    cout << sizeof(age) << endl; // int takes 4 bytes of data in the memory, char takes 1 byte(chars have a ASCII value and char stores a single string), float is the same as in python(4 bytes) and usually when constant values needed to be added good coders represent them their variables in capticals as mentioned in the code, bool is true or false(1 byte)
    
    return 0;
}