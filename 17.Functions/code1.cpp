#include<iostream>
using namespace std;

// sum of two numbers
double sumOfTwo(double a, double b) {
    double s = a + b;
    return s;
}
// min of two number
double min(double c, double d){
    if (c>d){
        return d;
    } else if( d>c){
        return c;

    } else{
        return 0;
    }
}

int main()
{
    cout << min (5,20) << endl;

    cout << sumOfTwo(4,5) << endl;
    return 0;
}