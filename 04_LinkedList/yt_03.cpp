// Linked list -- insert at Beginning using recursion

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

Node* insertAtBeginning(vector<int> arr, int index, int size, Node* prev){
    if(index == size){ 
        return prev;
    }
    Node* newNode = new Node(arr[index]);
    newNode->next = prev;
    return insertAtBeginning(arr, index+1, size, newNode);
};

int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = insertAtBeginning(arr, 0, arr.size(), NULL);

    Node* temp;
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<((temp->next == NULL)?"":" -> ");
        temp = temp->next;
    }
}