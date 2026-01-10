#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    
    for (int i = 0; i<n; i++){
        
        for(int j =i; j>=0; j--){
            char ch = 'A' + j;
            cout << ch << " ";
            
        }
        cout << endl;


    }

    return 0;
}

// reverse triangle pattern using characters