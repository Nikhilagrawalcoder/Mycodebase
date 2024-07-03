#include <bits/stdc++.h>
using namespace std;

// class Queue{
//     int *arr;
//     int front;
//     int rear;
//     int size;
//     public:
//     Queue(int n){
//         arr=new int[n];
//         front=-1;rear=-1;
//         size=n;
//     }
//     void push(int k){
//         if(isempty()){
//         arr[(rear+1)%size]=k;
//         front=(front+1)%size;
//         rear=(rear+1)%size;
//         }
//         else if(isfull())
//         {
//             cout<<"Overflow the queue";
            
//         }
//         else{
//             arr[(rear+1)%size]=k;
//             rear=(rear+1)%size;
            
//         }
//     }
//     void pop(){
//         if(isempty())
//         {
//             cout<<"queue me kuch dal de";
//             return;
//         }
//         else if(front==rear)
//         {
//             front=-1;
//             rear=-1;
//         }
//         else{
//             front=(front+1)%size;
//         }
//     }
//     bool isempty(){
//         if(front==-1)
//         return true;
//         return false;
//     }
//     bool isfull(){
//         if((rear+1)%size==front)
//         return true;
//         return false;
//     }
//     int start(){
//         if(isempty())
//         {
//             cout<<"kuch dal de";
//             return-1;
//         }
//         else{
//             return arr[front];
//         }
//     }
// };
int main()
{   
    // Queue q(5);
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // q.push(5);
   
    // cout<<q.start()<<endl;
    // q.push(84);
    // q.push(47);
    // q.pop();
    // cout<<q.start();
queue<int>q;
q.push(5);
cout<<q.front();
q.push(45);
q.push(7);
cout<<q.back();
  
    return 0;
}