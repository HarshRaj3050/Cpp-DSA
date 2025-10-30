// linked list -- deletion at position using recursion

#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node *head = NULL;
Node *tail = head;

void insertAtEnd(int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = head;
    }
    else
    {
        tail->next = newNode;
        tail = tail->next;
    }
}

Node *deletionAtPosition(Node *curr, int position)
{
    if (position == 1)
    {
        Node *temp = curr->next;
        delete curr;
        return temp;
    }
    curr->next = deletionAtPosition(curr->next, position - 1);
    return curr;
}

void display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << ((temp->next == NULL) ? "" : " -> ");
        temp = temp->next;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    for (int i = 0; i < arr.size(); i++)
    {
        insertAtEnd(arr[i]);
    }
    head = deletionAtPosition(head, 4);

    display();
}
