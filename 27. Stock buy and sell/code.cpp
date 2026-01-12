//O(n2) time complexity but did it myself
//gave TLE on leetcode so it's wrong


#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int> prices){
    int n = prices.size();
    int maxP = INT_MIN;

    for(int i = 0; i < n; i++){
        int currDiff = 0;
        for (int j = i + 1; j < n; j++){
            currDiff = prices[j] - prices[i];
            if (currDiff < 0){
                continue;
            }
            maxP = max(currDiff,maxP);

        }
    }
    if (maxP == INT_MIN){
        return 0;
    } else{
        return maxP;
    }
}

int main()
{
    vector<int> prices = {7,6,4,3,1};
    cout << maxProfit(prices) << endl;
    return 0;
}