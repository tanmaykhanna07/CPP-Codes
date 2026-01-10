#include<iostream>
using namespace std;

int main()
{
// Arithematic Operators
    int a = 5;
    int b = 12;
    int diff = (b/(double)a);
    cout << (b/a) << endl; // will print 2 decimals are removed without any care
    cout << (b/(double)a) << endl; // if a double/float is included in any of a or b then the result will be in decimals as intended
    cout << (diff) << endl; // as it is now saved as int, no decimals once again

//Relational Operators
    cout << (5>2) << endl; // true --> 1
    cout << (3!=5)<< endl; 
    cout << (3!=3)<< endl;// false --> 0 
    cout << ((float)3.99==(double)3.99)<< endl;// false --> 0 

// Logical Operators (Or, and ,not) // Or and are same as python  Or --> || And --> &&(ampersand)

    cout << !(3>1)<< endl; // not operator will make a true statement false and vice versa this will print false -->> 0
    return 0;
}