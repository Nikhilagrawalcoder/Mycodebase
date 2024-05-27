#include<bits/stdc++.h>
using namespace std;
class queue{
  private:
  vector<int>arr;
  int front;
  int size;
  public:
  queue(int sz=0){
    arr=vector<int>(sz,0);
  }
  bool isempty(){
    return size==0;
  }
  bool isfull(){
    return size==arr.size();
  }
  bool size(){
    return size;
  }
  void enqueue(int item){
  if(isfull())
  throw invalid_argument("Baklol queue bhar gayi");
  int idx = (front+size)%arr.length;
		arr[idx]=item;
		size++;


  }
   int Dequeue() 
	{
		if(isEmpty())
		{
			throw invalid_argument("Baklol Queue Kahli h");
		}
		int w = arr[front];
		front=(front+1)%arr.length;
		size--;
		return w;
	
	}
     int getFront() {
		if(isEmpty())
		{
			throw invalid_argument("Baklol Queue Kahli h");
		}
		int w = arr[front];
		return w;
	}


void Display()
	{
		for(int i=0;i<size;i++)
		{
			int idx = (front+i)%arr.length;
			
			cout<<arr[idx];
		}
		cout<<nline;
	}


}