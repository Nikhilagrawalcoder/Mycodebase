#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
int main()
{   
vector<int>arr={2,5,8,7};
Node* head=new Node(arr[0],nullptr);
Node* temp=head;
for(int i=1;i<arr.size();i++){
    Node* x=new Node(arr[i]);
    temp->next=x;
    temp=x;
}
Node* temp2=head;
while(temp2!=nullptr){
    cout<<temp2->data<<endl;
    temp2=temp2->next;
}

    return 0;
}