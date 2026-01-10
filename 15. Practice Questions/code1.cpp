// sum of all numbers from 1 to N which are divisible by 3
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter N:\n";
    cin >> n;
    int threeSum = 0;
    for (int i =1;i<=n ; i++){
        if (i%3==0){
            threeSum += i;
        }
    }
    
    cout << "The sum of numbers from 1 to N who're divisible by 3 is " << threeSum << endl;

    return 0;
}