#include<cassert>
#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class arrayQueue{
  int rear;
    int front;
    int length;
    int arr[MAX_SIZE];
public:
  arrayQueue(){
      front=0;
      rear = MAX_SIZE - 1;
      length =0;
  }
    bool isEmpty(){
        return length == 0;
    }
    
 bool isFull(){
     return length == MAX_SIZE;
 }
    void addQueue(int Element){
        if(isFull()){
            cout<<"queue full"<<endl;
        } else{
            rear = (rear +1)%MAX_SIZE;
            arr[rear] = Element;
            length++;
        }
        
    }
    void deleteQueue()
    {
        if (isEmpty())
        {
            cout << "Empty Queue Can't Dequeue ...!";
        }
        else
        {
            front = (front + 1) % MAX_SIZE;
            --length;

        }
    }
    

void frontqueue(){
  cout<< arr[front]<<endl;
}





void rearqueue(){
    
    cout<< arr[rear]<<endl;;
}




void printqueue(){
    if(isEmpty()){
        cout<<"the queue is empty "<<endl;
    }else{
    cout<<"[ ";
    for(size_t i=0; i != rear + 1 ; i = (i+1)%MAX_SIZE){
        cout<<arr[i]<<" ";
    }
    cout<<" ]"<<endl;
}
}



 
};
int main(){
    arrayQueue q1;
    q1.addQueue(1);
    q1.addQueue(2);
    q1.frontqueue();
    q1.rearqueue();
    q1.deleteQueue();
    
    
    
    q1.printqueue();
   
    
    
    
    return 0;
}
