//sorting algorithm based
//time complexity is O(nlogn)

#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int>  vec){
    sort(vec.begin(), vec.end()); // sort function
    int ans = vec[0];
    int freq = 1;
    int n = vec.size();

    for(int i = 1; i << n; i ++  ){
        if(vec[i] == vec[i-1]){
            freq ++;
        }
        else{
            freq = 1, ans = vec[i];
        }
        if(freq > n/2){
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> vec = {0,0,1,1,2,2,2,2,2}; // already sorted
    cout << majorityElement(vec) << endl;
    return 0;
}