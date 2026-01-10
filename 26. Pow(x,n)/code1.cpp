//leetcode 50. Pow(x,n)


#include<iostream>
using namespace std;

double myPow(double x, int n){
    long binForm = n;
    double ans = 1;

    if(n == 0){
        return 1.00;
    }

    if( x== 0){
        return 0.00;
    }
    if( x== 1){
        return 1.00;
    }
    if (x== -1 && n%2 == 0) return 1.00;
    if (x== -1 && n%2 != 0) return -1.00;

    if(n < 0){
        x = 1/x;
        binForm = -binForm;
    }

    while (binForm > 0 ){
        if (binForm %2 == 1){
            ans *= x;
        }
        x*=x;
        binForm /= 2; // in binary 2 is 10 so it shifts the binNum right
    }
    return ans;
}

int main()
{
    double x;
    int n;
    cout << "Input x and n: " << endl;
    cin >> x;
    cin >> n;
    cout << myPow(x,n) << endl;
    return 0;
}