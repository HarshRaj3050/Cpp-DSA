#include<iostream>
using namespace std;

class Queue{
    public:
    int size = 5;
    int *arr = new int[size];
    int front = -1, rear = -1;
    


    bool isEmpty(){
        if(front == -1){
            return true;
        }
        return false;
    }

    bool isFull(){
        return (rear+1)%size == front;
    }

    void insert(int value){
        if(isEmpty()){
            arr[0] = value;
            front = rear = 0;
            return;
        }

        if(isFull()){
            return;
        }

        rear = (rear+1)%size;
        arr[rear] = value;
    }

    void remove(){
        if(isEmpty()){
            cout<<"Queue is Empty!!";
        } else if(front == rear){
            front = rear = -1;
        } else {
            front = (front+1)%size;
        }
    }

    void display(){
        if(isEmpty()){
            cout<<"Queue is Empty!!";
        } else {
            int temp = front;
            while(true){
                cout<<arr[temp]<<" ";
                if ((temp % size) == rear) break;
                temp = (temp+1)%size;

                
            }
        }
    }
};

int main(){
    Queue q;
    q.insert(5);
    q.insert(2);
    q.insert(3);
    q.insert(7);
    q.insert(8);
    q.remove();
    q.remove();
    q.insert(1);
    q.insert(10);
    q.display();
}