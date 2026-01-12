// Optimized approach to this problem using two pointer approach

#include<iostream>
#include <algorithm>

#include <vector>
using namespace std;

int maxArea(vector<int> &heights) {
    int n = heights.size();
    int lp = 0;
    int rp = n-1;
    int maxA = 0;


    while (lp < rp){
        int width = rp - lp;
        int height = min(heights[lp], heights[rp]);

        int currArea = height * width;
        maxA = max(maxA,currArea);

        if(heights[lp] < heights[rp]){
            lp++;

        }else{
            rp--;
        }
        
    }



    return maxA;

}

int main()
{
    vector<int> vec = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(vec) << endl;
    return 0;
}