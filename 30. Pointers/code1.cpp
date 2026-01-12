#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int* ptr = &a;
    float price = 100.25;
    float* ptr2 = &price;
    cout << &a << ' ' << ptr << ' '<< ptr2 << endl;
    return 0;
}