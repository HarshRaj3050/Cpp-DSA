// Queue using Linked-List

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

class Queue{
    Node* front;
    Node* rear;

    public:
    Queue(){
        front = rear = NULL;
    }

    bool isEmpty(){
        return (front == NULL);
    }

    void push(int value){
        if(isEmpty()){
            front = new Node(value);
            rear = front;
        } else {
            rear->next = new Node(value);
            if(rear->next == NULL){
                cout<<"Queue is Full!!!"<<endl;
                return;
            }
            rear = rear->next;
        }
    }

    void pop(){
        if(isEmpty()){
            cout<<"Queue is Empty!!!"<<endl;
            return;
        } 
        Node* temp = front;
        front = front->next;
        delete temp;
    }

    int start(){
        if(isEmpty()){
            cout<<"Queue is Empty!!"<<endl;
            return -1;
        }
        return front->data;
    }

    void display(){
        if(isEmpty()){
            cout<<"Queue is Empty!!"<<endl;
        } else {
            Node* temp = front;
            while(temp != NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
    }

};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.display();

    q.pop();
    q.pop();
    q.pop();

    q.push(60);
    q.push(70);

    q.display();

    if(!q.isEmpty()){
        cout<<q.start()<<endl;
    }
}