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
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtEnd(Node *&tail, int data)
{
    Node *temp = new Node(data);

    //stores the address of temp
    tail->next = temp;
    //assign the tail the tail pointer to the temp variable;
    tail = temp;
}
void print(Node *&head)
{
    Node *temp = head;
    while (head != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *firstnode = new Node(13);
    Node *head = firstnode;
    Node *tail = firstnode;
    insertAtHead(head, 12);
    insertAtHead(head, 11);
    insertAtEnd(tail, 14);
    insertAtEnd(tail, 15);
    print(head);
    return 0;
}