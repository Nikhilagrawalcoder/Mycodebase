#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        if (n > 0)
        {
            cout << "Positive"
                 << " "
                 << "even";
        }
        else if (n == 0)
            cout << "zero";
        else
        {
            cout << "Negative"
                 << " "
                 << "odd";
        }
    }
    else
    {
        if (n > 0)
        {
            cout << "Positive"
                 << " "
                 << "odd";
        }
        else if (n == 0)
            cout << "zero";
        else
        {
            cout << "Negative"
                 << " "
                 << "odd";
        }
    }

    return 0;
}