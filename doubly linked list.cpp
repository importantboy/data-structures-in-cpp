#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    int key;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        prev = nullptr;
        next = nullptr;
    }
};

void addatend(Node *&tail, int data)
{
    Node *newnode = new Node(data);
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void addatfirst(Node *&head, int data)
{
    Node *newnode = new Node(data);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void Printfromfirst(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
void Printfromlast(Node *tail)
{
    while (tail != nullptr)
    {
        cout << tail->data << " ";
        tail = tail->prev;
    }
}
int main()
{
    Node *head;
    Node *tail;
    Node *firstnode = new Node(2);
    head = firstnode;
    tail = firstnode;
    // adding the element

    addatend(tail, 3);
    addatend(tail, 4);
    addatend(tail, 5);

    addatfirst(head, 0);
    addatfirst(head, -1);
    addatfirst(head, -2);

    
    cout << "array from first :" << endl;
    Printfromfirst(head);
    cout << endl;
    cout << "array till last :" << endl;
    Printfromlast(tail);
    return 0;
};
