//vector functions
#include<iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    cout << "size before push back is " << vec.size() << endl;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    

    cout << "size after push back is " << vec.size() << endl;

    for (int val : vec){
        cout << val << ' ';
    }
    cout << endl;
    vec.pop_back();// the value from the end gets deleted


    for (int val : vec){
        cout << val << ' ';
    }
    cout << endl;

    cout << vec.front() << endl;// returns the first value, similarty vec.back() returns the last value

    cout << vec.at(1) <<endl; // will get the value at index 2( same as vec[i] )

    return 0;
}