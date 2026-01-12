//pass by reference using pointers
#include<iostream>
using namespace std;

// void changeA(int a){
//     a = 20;
// }

// int main()
// {
//     int a = 10;

//     changeA(a);

//     cout << "The value of a in main function is: " << a;
//     return 0;
// }

// the above code is an example of pass by value

void changeA(int* ptr){
    *ptr = 20;
}

int main(){
    int a = 10;

    changeA(&a);

    cout << "The value of a in main function is: " << a;
    return 0;
}

// we passed &a as the address of a in the argument and in the fucntion we went to the address of a and changed the valued stored in the memory address to 20