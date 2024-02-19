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
        this->head = newnode;
        this->tail = newnode;
    }
    void insertNode(int position, int key, string value)
    {
        Node *newnode = new Node(key, value);
        if (position > this->tail->key)
        {
            newnode->prev = this->tail;
            this->tail->next = newnode;
            this->tail = newnode;
        }
        else if (position < this->head->key)
        {
            newnode->next = this->head;
            this->head->prev = newnode;
            this->head = newnode;
        }
        
    }
    void insertAtmiddle(int position,int key , string value){
        int index = 1;
        Node* newnode = new Node(key , value);
        Node* current = this->head;
        while(current != nullptr){
             if(this->head->prev == nullptr){
                 cout << "cannot insert position first"<< endl;
                 break;
             }
              else if(this->tail->next == nullptr){
                cout << "insert at last position " << endl;
              }
               else{
                        
               }
              current = current->next;
        }
    };
    void printList()
    {
        Node *current = this->head;

        while (current != nullptr)
        {
            cout << "[key:" << current->key << " ";
            cout << "value:" << current->value << "]"
                 << " ";
            current = current->next;
        }
    };
    Node *gethead()
    {
        return this->head;
    }
    Node *getTail()
    {
        return this->tail;
    }
};
int main()
{
    // initialize the list with first node
    DoublyLinkedList list(1, "first");
    // insert node;
    list.insertNode(2, 2, "second");
    list.insertNode(3, 3, "third");
    list.insertNode(-1, 0, "zero");
    list.insertNode(-2, -1, "-one");
    list.insertAtmiddle(-1,20,"rahul");
    list.printList();
    cout << endl;
    cout << "the current head is at key : " << list.gethead()->key << endl;
    cout << "the current tail is at key : " << list.getTail()->key << endl;

    return 0;
}