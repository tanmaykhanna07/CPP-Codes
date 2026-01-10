#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter N:\n";
    cin >> n;

    for (int i = 0; i<n; i++){
        char ch = 'A'; // before inner loop, when the outer loop runs ch resets to A if it was outside and let's suppose the first line is present. 

        for(int j =0; j<n; j++){
            cout << ch;
            ch = ch + 1;
        }
        cout << endl;
    }

    return 0;
}

// character sqaure pattern