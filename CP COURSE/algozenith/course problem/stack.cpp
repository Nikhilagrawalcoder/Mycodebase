#include<bits/stdc++.h>
using namespace std;
#define ll long long 

class stk{
   private:
   int ind =-1;
   vector<int>v;

   public:
   stk (int sz = 0)
   {
     v = vector<int>(sz,0);
   }
   bool isempty(){
     if(ind == -1)
     return true;
    return false;
   }

   void push(int k)
   {
      ind++;
      if(ind == v.size())
      {
         v.push_back(k);
      }
      else
      {
      v[ind] = k;
      }
   }

   void pop()
   {
      if(ind == -1)
      {
         throw invalid_argument("'stack out of bound empty'");
      }
      else{
          v[ind] = 0;
          ind--;
      }
   }

   void top()
   {
      if(ind == -1)
      {
         throw invalid_argument("'stack out of bound empty'");
      }
      else{
        cout<<v[ind]<<endl;
      }
   }


};

int main()
{
   stk s(5);
   s.push(50);
   s.top();
   s.pop();
   cout<<s.isempty()<<endl;

}