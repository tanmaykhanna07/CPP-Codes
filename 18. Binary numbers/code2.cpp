//binary to decimal

#include<iostream>
using namespace std;

int binToDecimal(int binaryNum){
    int ans = 0;
    int pow = 1;

    while (binaryNum> 0){
        int rem = binaryNum % 10;
        ans += (rem*pow);
        binaryNum = binaryNum / 10;
        pow *= 2;
    }
    return ans;
}

int main()
{
    int binNum;
    cout<< "Enter the number: ";
    cin >> binNum;

    cout << binToDecimal(binNum);
    return 0;
}