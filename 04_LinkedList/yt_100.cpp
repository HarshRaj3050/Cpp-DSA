#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

Node* head = NULL;

void insertAtbeginning(int value){
    if(head == NULL){
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;
        head = newNode;

    } else {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }
}



void display(){
    Node *temp = head;
    while(temp != NULL) {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
}

int main(){
    insertAtbeginning(5);
    insertAtbeginning(4);
    insertAtbeginning(3);
    
    display();
}