// pointer arithematic operations

#include<iostream>
using namespace std;

int main()
{
    int a= 10;
    int* ptr = &a;
    cout << ptr<< endl;
    cout << *ptr << endl;

    ptr++;
    int b = 20;
    b = *ptr;

    cout << ptr <<endl;
    cout << *ptr<< endl;
    cout << b <<endl;

    return 0;
}