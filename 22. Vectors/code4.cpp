#include<iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec ={4,2,7,8,1,2,5};
    int target;
    cout << "Enter target: ";
    cin >> target;
    
    for (int i =0; i < vec.size(); i++){
        if(vec[i] == target){
            cout << "The target is at index " <<  i << ' ';
        }
    }
    return 0;
}

//linear search algorithm using vectors
