#include<iostream>
#include <vector>
using namespace std;

int search(vector<int> vec,int tar){

    int st = 0;
    int end = vec.size()-1;
    
    while(st <= end){
        int mid = st + (end-st)/2;
        if (vec[mid] == tar)
        {
            return mid;
        }
        
        if(vec[st]<=vec[mid]){ //left sorted?? Yes?
            if(tar >= vec[st] && tar <= vec[mid]){ //use binary sort alogrithm on the left portion
                end = mid-1;
            }
            else {
                st = mid + 1;
            }
            }
        else{ // right sorted?? yes?
            if(tar >= vec[mid] && tar <= vec[end]){//use binary sort alogrithm on the right portion
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        
    }
    return -1;
}



int main()
{
    vector<int> vec = {6,7,0,1,2,3,4,5};
    int tar = 0;
    cout << search(vec, tar) << endl;
    return 0;
}