#include <bits/stdc++.h>
using namespace std;

class any{
    public:
    int i;
    any(auto k)
    {
        if(typeof(k) == int)
        i = k;
    }

};
int main()
{   
    any d =56;
    cout<<any.i<<endl;
    return 0;
}