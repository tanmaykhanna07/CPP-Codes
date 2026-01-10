#include<iostream>
using namespace std;

int sum(int a, int b){
    a = a +10;
    b = b+ 10;
    return a + b;
}

int main()
{
    int a =4;
    int b =5;
    cout << a + b << endl; // a and b in main() are different than in sum(), this is known as pass by value see the image for more detailsa

    cout << sum(a,b) << endl;
    return 0;
}