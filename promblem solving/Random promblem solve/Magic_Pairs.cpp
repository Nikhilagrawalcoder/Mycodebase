#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
     int c=(n*(n-1))/2;
       
        cout<<c<<endl;
    }
    return 0;
}