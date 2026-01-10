// waf to check if a number is prime or nah

#include<iostream>
using namespace std;

void checkPrime(int n){
    bool isPrime = true;
    for (int i = 2; i * i <= n; i ++){
        if (n%i ==0 ){
            isPrime = false;
        }
    }
    if(isPrime == true){
        cout << "The number is prime";

    }else {
        cout << "The number is not prime";
        
    }


}

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    checkPrime(num) ;

    return 0;
}