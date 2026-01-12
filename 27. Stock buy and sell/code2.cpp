#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int maxProfit(vector<int> prices){
    int maxP = 0;
    int bestBuy = prices[0];
    int n = prices.size();

    for(int i = 1; i<n ; i++){

        if(prices[i]>bestBuy){
            maxP = max(maxP, prices[i]- bestBuy);

        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxP;
}



int main()
{
    vector<int> prices = {7,1,5,3,6,4};
    cout << maxProfit(prices) << endl;
    return 0;
}