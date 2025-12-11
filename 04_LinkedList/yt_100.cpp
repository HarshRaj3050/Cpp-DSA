#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

Node *head = NULL;
Node *tail = head;

void insertAtBeginning(int value){
    Node *newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = head;
        return;
    }
    newNode->next = head;
    head = newNode;

}

void insertAtEnd(int value){
    Node *newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = head;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

void display(){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    for(int i=0; i<arr.size(); i++){
        insertAtBeginning(arr[i]);
    }

    insertAtEnd(10);
    insertAtBeginning(11);
    insertAtEnd(100);
    display();
}