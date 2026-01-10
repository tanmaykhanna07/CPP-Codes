//Kadane's algorithm
//Leetcode 53

#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currenSum = 0;
        int maxSum = INT_MIN;
        for(int i = 0 ; i < nums.size(); i++){
            currenSum += nums[i];                                               // main stuff is here as nums is not defined this won't work
            maxSum = max(currenSum,maxSum);
            if (currenSum < 0){
                currenSum = 0;
            }
        }
        return maxSum;
    }

};