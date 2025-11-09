// Circular Queue using Array

#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int front, rear;
    int size;

    Queue(int s)
    {
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;   
    }  

    ~Queue(){
        delete []arr;
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
        return (rear+1)%size == front;
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
        rear = (rear+1)%size;
        
        arr[rear] = value;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        else if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front+1)%size;
        }
    }

    int start()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty!!" << endl;
            ;
            return -1;
        }
        return arr[front];
    }

    void display()
    {
        if(isEmpty()){
            cout<<"Queue is Empty!!"<<endl;
            return;
        } 
        int i=front;
        while(true){
            cout<<arr[i]<<" ";
            if((i%size) == rear) break;
            i = (i+1)%size;
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

    if (!q.isEmpty())
    {
        cout << q.start() << endl;
    }

    q.pop();
    q.display();
}