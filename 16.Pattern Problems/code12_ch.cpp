#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    char ch = 'A';
    for (int i = 0; i<n; i++){
        for(int j =1; j<=i+1; j++){
            cout << ch << ' '; 
            ch++;
        }
        cout << endl;


    }

    return 0;
}

// Floyd's traingle pattern for characters