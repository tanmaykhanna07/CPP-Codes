// using for loops sum of all even numbers in N

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    int evenSum = 0;

    for (int i =1 ; i<=n; i++){

        if (i%2 == 0){
            evenSum += i;
        }

    }

    cout << "Even sum is " << evenSum << endl; 
    return 0;
}