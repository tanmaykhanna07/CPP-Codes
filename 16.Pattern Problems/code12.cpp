#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    int num = 1;
    for (int i = 0; i<n; i++){
        for(int j =i+1; j>0; j--){
            cout << num << ' '; 
            num++;
        }
        cout << endl;


    }

    return 0;
}

// Floyd's traingle pattern using Reverse loop, the logic stays the same