#include<bits/stdc++.h>
using namespace std;
int main(){


int n;
cin>>n;
int a[n];
for (int i = 0; i < n; i++)
{
    /* code */
    cin>>a[i];
}
int q;
cin>>q;
int as[q];
for (int i = 0; i < q; i++)
{
    /* code */
    cin>>as[i];
}
int k=*max_element(as,as+q);
int b[k+1]={0};
for(int i=0;i<n;i++){
    b[a[i]]++;
}

for (int i = 0; i < q; i++)
{
    /* code */
    cout<<b[as[i]]<<endl;
}


return 0;
}

