// waf to print the all prime numbers between 2 and N

#include<iostream>
using namespace std;

bool checkPrime(int n) {
    for (int i = 2; i * i <=n; i++){
        if(n%i == 0){
            return false;
        } 
    }
    return true;
}

void printPrime(int n){

    for (int i =2 ; i <=n  ; i++){
        if (checkPrime(i) == true){
            cout << i << " ";
        }
    }
}


int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    printPrime(num) ;

    return 0;
}