// factorial of n

#include<iostream>
using namespace std;


int factN(int n){ // int n is the parameter
    int prod = 1;
    for ( int i=1 ; i <= n; i++){
        prod = prod * i;

    }
    return prod;
}

int main()
{
    int num;
    cout << "Enter the value: ";
    cin >> num;

    cout << "The factorial of the given number is " << factN(num)<< endl; // argument is num

    return 0;
}