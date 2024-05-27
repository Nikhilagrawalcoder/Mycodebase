#include<bits/stdc++.h>
using namespace std;
#define ll long long 
 
void solve()
{
   string k;cin>>k;
   string e = k;
   sort(e.begin(),e.end());
   bool flag = true;
   for(int i = 0;i<k.size();i++)
   {
     if(e[i] !=k[i])
     {
        flag = false;
        break;
     }
   }
   if(flag == true)
   {
    cout<<1<<endl;
    return;
   }
   if(k[k.size()-1] =='1')
   {
     k.push_back('0');
   }
   else{
    k.push_back('1');
   }
   int counter = -1;
   for(int i = 0;i<k.size()-1;i++)
   {
      if(k[i] !=k[i+1])
      counter++;
   }
   if(counter ==1)
   {
    cout<<2<<endl;
   }
   else{
    cout<<counter<<endl;
   }
}
int main()
{
   ll t;cin>>t;
   while(t--)
   {
      solve();
   }
   
   return 0;
}