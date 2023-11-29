#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
#define pb push_back
#define mp make_pair

//Main
int main()
{
    int n,a,e;
    cin>>n>>a>>e;
    int arr[n];
    int b[n];
    int s=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        b[i]=s+arr[i];
        s=s+arr[i];

    }
    int w=arr[0]*a;
    sort(b,b+n);
    int i;
    for(i=n-1;i>=0;i--){
        if(w/b[i]>=e)
        {
break;
        }
           
    }
    cout<<n-i-1;

    return 0;
}

//End