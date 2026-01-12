#include<iostream>
using namespace std;

int main()
{
    int arr[] ={1,2,3,4,5};
    int* ptr = arr;

    cout << *ptr << endl; // --> 1

    cout << arr << endl;
    return 0;
}