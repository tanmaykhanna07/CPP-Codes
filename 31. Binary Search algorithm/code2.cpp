//recursive binary search
//space complexity O(logn) which is worse than iterative version of this code as it has a space complexity of O(1). This is worse because a call stack is formed in recursion

#include<iostream>
#include <vector>
using namespace std;

int recBinarySearch(vector<int> vec, int tar, int st, int end){

    

    if(st <= end){
        int mid = st + (end-st)/2;

        if(tar > vec[mid]){
            return recBinarySearch(vec, tar, mid +1, end);
        }
        if(tar < vec[mid]){
            return recBinarySearch(vec, tar, st, mid -1);
        }
        else{
            return mid;
        }
    }
    return -1;

}

int main()
{
    vector<int> vec = {-1,0,3,4,5,9,12};
    int st = 0;
    int end = vec.size() -1;

    int tar;
    cout << "Enter target: " << endl;
    cin >> tar;

    cout << recBinarySearch(vec,tar, st ,end) << endl;
    return 0;
}