#include<iostream>
using namespace std;

class Queue{
    int size;
    int front = -1, rear = -1;
    public:
    int *list;

    Queue(int s){
        size = s;
        list = new int[s];
    }

    bool isEmpty(){
        return front==-1;
    }

    bool isFull(){
        return (rear+1)%size == front;
    }

    void push(int value){
        if(isEmpty()){
            front = rear = 0;
            list[0] = value;
        } else {
            if(isFull()){
                cout<<"Queue is Full!"<<endl;
            } else {
                list[rear] = value;
                rear = (rear+1)%size;
            }
        }
    }

    void pop(){
        if(isEmpty()){
            cout<<"Queue is Empty!!"<<endl;
        } else {
            front = (front+1)%size;
        }
    }

    void start(){
        if(isEmpty()){
            cout<<"Queue is Empty!!"<<endl;
        } else {
            cout<<list[front];
        }
    }

    void display(){
        if (isEmpty())
        {
            cout << "Queue is Empty!!" << endl;
            return;
        }
        int i = front;
        while (true)
        {
            cout << list[i] << " ";
            if ((i % size) == rear)
                break;
            i = (i + 1) % size;
        }
        cout << endl;
    }



};

int main(){
    Queue q(5); // Max storable items = 4 (size-1)
    q.push(10);
    q.push(20);
    q.push(30);
    q.display();
    q.pop();
    q.display();
    q.push(40);
    q.push(50);
    q.push(60);
    q.display();
    q.push(70);
}