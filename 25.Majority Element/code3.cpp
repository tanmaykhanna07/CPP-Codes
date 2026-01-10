#include<iostream>
#include <vector>
using namespace std;
int majorityElement(vector<int> vec){
    
    int ans = 0;
    int freq = 0;
    int n = vec.size();

    for (int i = 0 ; i < n ; i++){
        if(freq == 0){
            ans = vec[i];

        }
        if (ans == vec[i]){
            freq++;
        }else {
            freq--;
        }
    }

    
    
    return ans;
}

int main()
{
    vector<int> vec ={1,2,2,1,1};
    cout << majorityElement(vec) << endl;
    return 0;
}