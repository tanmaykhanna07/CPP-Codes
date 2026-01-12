//brute force approach
// O(n^2);


#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int mostWater(vector<int> heights){
    int width = 0;
    int height = 0;
    int maxVol = INT_MIN;
    int n = heights.size();
    for (int i =0 ; i < n; i++){
        int currVol = 0;
        for(int j = i+1; j < n; j++){
            height = min(heights[i], heights[j]);
            width = j - i;
            currVol = height * width;
            maxVol = max(maxVol, currVol);
        }
    }
    return maxVol;
}

int main()
{
    vector<int> heights = {1,8,6,2,5,4,8,3,7};
    cout << mostWater(heights) << endl;
    return 0;
} 