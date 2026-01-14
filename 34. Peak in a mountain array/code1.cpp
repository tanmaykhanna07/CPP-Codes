// linear search approach(very easy)
#include<iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    for(int i = 1; i< arr.size() ;i++){
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {0,3,8,9,5,2};
    cout << peakIndexInMountainArray(arr) << endl;
    return 0;
}