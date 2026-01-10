//brute forcer approach for pair sum with time complexity O(n^2)
#include<iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {2,7,11,15};
    int sz = sizeof(arr)/ sizeof(arr[0]);
    int target = 26;
    vector<int> ans;

    for(int i = 0; i < sz; i++ ){
        for (int j = i+1; j < sz; j++){
            if(arr[i] + arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);

            }
        }
    }

    for(int val: ans){
        cout << val << ' ';

    }
    cout << endl;
    return 0;
}