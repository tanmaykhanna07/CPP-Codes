//brute force approach for maximum subarray sum
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {12,25,359,21,-2452,-1,2532,-2,125,23,43};
    int size = sizeof(arr)/sizeof(arr[0]);

    int maxSum = INT_MIN;
    for (int st = 0; st < size; st++){
        int currentSum = 0;
        for (int end = st; end < size; end++){
            currentSum += arr[end];
            maxSum = max(currentSum,maxSum);

            

        }
    }   
    cout << maxSum << endl;

    return 0;


}
