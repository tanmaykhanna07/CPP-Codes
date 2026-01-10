#include<iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int> &vec){// & used for pass by reference 
    int start = 0;
    int end = vec.size() -1;

    while (start < end){
        swap(vec[start], vec[end]);
        start ++;
        end --;

    }
}


int main()
{
    vector<int> vec = {4,2,7,8,1,2,5};

    reverseVector(vec);

    for (int i = 0; i < vec.size() ; i++){
        cout << vec[i] << ' ';
    }
    cout << endl;
    return 0;
}