// linked list -- deletion at END using function

#include<iostream>
#include<vector>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

Node* head = NULL;
Node* tail = head;

void insertAtEnd(int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        tail = head;
    }
    tail->next = newNode;
    tail = newNode;
}

void deletAtEnd(){
    if(head == NULL){
        cout<<"linked list is empty"<<endl;
    }
    if(head->next == NULL){
        Node* temp = head;
        head = NULL;
        delete temp;
    }
    
    Node* curr = head;
    Node* prevCurr = NULL;
    while(curr->next != NULL){
        prevCurr = curr;
        curr = curr->next;
    }
    delete curr;
    prevCurr->next = NULL;
}

void display(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<((temp->next == NULL)?"": " -> ");
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    for(int i=0; i<arr.size(); i++){
        insertAtEnd(arr[i]);
    }

    cout<<"----Before Deletion----"<<endl;
    display();
    deletAtEnd();
    cout<<"----After Deletion----"<<endl;
    display();
}