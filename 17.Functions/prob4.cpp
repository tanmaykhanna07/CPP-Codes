// calculate binomail coefficient nCr for given n and r values

#include <iostream>
using namespace std;

int factN(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int binomial(int n, int r)
{

    int ans = factN(n) / (factN(r) * factN(n - r));
    return ans;
}

int main()
{
    int up;
    cout << "Enter n: ";
    cin >> up;
    int down;
    cout << "Enter r: ";
    cin >> down;

    if (up < down)
    {
        cout << "n can't be less than r\n";
    }
    else if (up < 0 || down < 0)
    {
        cout << "n or r can't be negative\n";
    }
    else
    {
        cout << "The binomial coefficient for given n and r is " << binomial(up, down) << endl;
    }

    return 0;
}