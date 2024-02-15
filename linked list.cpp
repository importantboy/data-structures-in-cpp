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
void print(Node* &head)
{
    Node *temp = head;
    while (temp != head)
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
     cout << head->data << endl;
    insertAtHead(head, 15);
    print(head);
    return 0;
}