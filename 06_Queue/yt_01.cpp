#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int front, rear;
    int size;

public:
    Queue(int s)
    {
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        return false;
    }

    bool isFull()
    {
        if (size - 1 == rear)
        {
            return true;
        }
        return false;
    }

    void push(int value)
    {
        if (isEmpty())
        {
            front = rear = 0;
            arr[0] = value;
            return;
        }
        else if (isFull())
        {
            cout << "Queue is full" << endl;
            return;
        }
        rear++;
        arr[rear] = value;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        else if (front == rear){
            front = rear = -1;
        } else {
            front++;
        }
    }

    int start(){
        if(isEmpty()){
            cout<<"Queue is Empty!!"<<endl;;
            return -1;
        } 
        return arr[front];
    }

    void display(){
        for(int i=front; i<=rear; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.display();
    cout<<q.start()<<endl;
    q.pop();
    q.display();
}