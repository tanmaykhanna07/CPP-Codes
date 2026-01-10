// calculate sum of numbers from 1 to n
#include<iostream>
using namespace std;

int sum(int n){
    int s = 0;
    for(int i = 1; i <=n; i++){
        s += i;
    }
    return s;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "sum is " << sum(num) << endl;
    return 0;
}