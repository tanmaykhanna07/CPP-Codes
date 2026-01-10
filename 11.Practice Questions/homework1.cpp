// sum of all odd numbers in n
// code2.cpp with while loop


#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout << "Enter n: "<< endl;
    cin >> n;

    int i = 1;
    int oddSum = 0;

    while (i<=n){
        if (i%2 != 0){
            oddSum += i;

        }
        i++;


    }

    cout << "Oddsum: " << oddSum << endl;
    return 0;
}