#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    if (n<=1){
        cout << "The number is not prime"<< endl;
        return 0;
    }
    bool isPrime = true;
    for (int i = 2; i*i<=n; i++ ){ // i<n^1/2 because we don't need to check the big factors to prove non prime if we can do it at half the factors
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if (isPrime == false){
        cout << "The number is not prime" << endl;
    } else {
        cout << "The number is prime" << endl;
    }

    
    return 0;
}