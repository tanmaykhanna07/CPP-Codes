//pass by reference using alias
#include <iostream>
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

void changeA(int &b){ //alias(this ampersand is not the memory address one but for alias)
    b = 20;
}

int main(){
    int a = 10;

    changeA(a);

    cout << "The value of a in main function is: " << a;
    return 0;
}

