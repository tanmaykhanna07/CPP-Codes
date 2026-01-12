//optimised solution when space complexity not considered right now
#include<iostream>
#include <vector>
using namespace std;

vector<int> ans(vector<int> nums){
    int n = nums.size();
    vector<int> sol(n,1);

    vector<int> prefix(n,1);
    prefix[0] = 1;

    vector<int> suffix(n,1);
    suffix[n-1] = 1;
    for(int i = 1; i< n; i++){
        prefix[i] = prefix[i-1] * nums[i-1];

    }
    for(int i = n-2; i >= 0; i--){
        suffix[i] = suffix[i+1] * nums[i+1];

    }
    for(int i = 0; i< n; i++){
        sol[i] = prefix[i] * suffix[i];
    }

    return sol;
    

}

int main()
{
    
    return 0;
}