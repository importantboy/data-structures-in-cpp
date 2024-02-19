#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node *&head, int data)
{
    // create a node

    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtEnd(Node *&tail, int data)
{
 Node *temp = new Node(data);
    if (tail == NULL)
    {
        // If the list is empty, update both head and tail
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(12);
    // head pointed to node 1

    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, 15);
    insertAtHead(head, 30);
    insertAtEnd(tail, 13);
    insertAtEnd(tail, 213);
    print(head);
    return 0;
};
