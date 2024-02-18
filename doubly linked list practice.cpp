#include <iostream>
#include <string>

using namespace std;
class Node
{
public:
    int key;
    string value;
    Node *prev;
    Node *next;

    Node(int key, string value)
    {
        this->key = key;
        this->value = value;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

class DoublyLinkedList
{
public:
   int key;
    Node *head;
    Node *tail;
    DoublyLinkedList(int key, string value)
    {
        this->key = key;
        Node *newnode = new Node(key, value);
        head = newnode;
        tail = newnode;
    }
    void insertNode(int position, int key, string value)
    {
        Node *newnode = new Node(key, value);
        if (position > this->key)
        {
            newnode->prev = tail;
            tail->next = newnode;
            tail = newnode;
        }
        if (position < this->key)
        {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }        
    }
    void printList()
    {
        while (head != nullptr)
        {
            cout << "[key:" << head->key << " ";
            cout << "value:" << head->value << "]"
                 << " ";
            head = head->next;
        }
    }
};
int main()
{
    // initialize the list with first node
    DoublyLinkedList list(1, "first");
    //insert node;
    list.insertNode(2, 2, "second");
    list.insertNode(3, 3, "third");
    list.insertNode(-1, 0, "zero");
    list.insertNode(-2, -1, "-one");
    list.printList();
    return 0;
}