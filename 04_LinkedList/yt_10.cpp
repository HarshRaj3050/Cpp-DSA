// linked list -- deletion at position using recursion (without head)

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
        tail = newNode;
    }
}

Node *iterate(Node *head, int position)
{
    Node *curr = head;
    while (position - 1 > 0)
    {
        curr = curr->next;
        position--;
    }
    return curr;
}

void deleteNode(Node *curr)
{
    Node *temp = curr->next;
    curr->data = temp->data;
    curr->next = temp->next;
    delete temp;
}

void display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << ((temp->next == NULL) ? "" : " -> ");
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    for (int i = 0; i < arr.size(); i++)
    {
        insertAtEnd(arr[i]);
    }

    cout << "----Before Deletion----" << endl;
    display();

    Node *curr = iterate(head, 4);

    deleteNode(curr);
    cout << "----After Deletion----" << endl;
    display();
}