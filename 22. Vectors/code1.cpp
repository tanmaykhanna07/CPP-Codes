#include<iostream>
#include <vector>
using namespace std;

int main()
{
    //vector<int> vec;
    // vector<int> vec = {1,2,3};
    //vector<int> vec(3,0); // first is the size of the vector and second is the value at each index of the vector
    
    vector<char> vec = {'a','b','c','d','e'};

    cout << "size is " << vec.size() << endl;

    for(char val : vec){ // for each loop
        cout << val << endl;
    }
    return 0;
}