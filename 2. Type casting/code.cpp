#include<iostream>
using namespace std;

int main()
{
    char grade = 'A'; //65 , a is 97 in ASCII and example of implicit typecasting small to big aka type conversion. 
    int value = grade;
    cout << value << endl;
    



    double price = 100.99;
    int newPrice = (int)price;
    cout << newPrice << endl;
    return 0;
}