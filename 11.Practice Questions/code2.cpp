// sum of all odd numbers
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;

//     int sum =0;

//     for (int i =1; i<=((2*n)-1); i= i+2){
//         sum += i;

//     }

//     cout << sum << endl;
//     return 0;
// }
// My solution above

// Given solution

// sum of all the odd numbers in n
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    int oddSum = 0;

    for (int i =1 ; i<=n; i++){

        if (i%2 != 0){
            oddSum += i;
        }

    }

    cout << "Odd sum is " << oddSum << endl; 
    return 0;
}