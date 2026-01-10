// code to convert decimal numbers to binary numbers

#include<iostream>
using namespace std;

int decToBinary(int decNum){
    int ans = 0;
    int pow = 1;

    while (decNum > 0){
        int rem = decNum%2;
        decNum = decNum / 2;
        ans += (rem * pow);
        pow *= 10;


    }
    return ans;
}

int main()
{
    int decNum;
    cout << "Enter the number: ";
    cin >> decNum;
    

    cout << decToBinary(decNum);
    return 0;
}