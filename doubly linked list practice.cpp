#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *prev;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->prev = nullptr;
        this->next = nullptr;
    }
    ~Node()
    {
        if (this->next != nullptr)
        {
            delete this->next;
            this->next = nullptr;
        }
    }
};

class DoublyLinkedList
{
public:
    Node *head;
    Node *tail;

    DoublyLinkedList(int value)
    {
        Node *initialnode = new Node(value);
        this->head = initialnode;
        this->tail = initialnode;
    }

protected:
    void insertAfter(int value)
    {
        Node *newnode = new Node(value);
        this->tail->next = newnode;
        newnode->prev = this->tail;
        this->tail = newnode;
    };

protected:
    void insertBefore(int value)
    {
        Node *newnode = new Node(value);
        this->head->prev = newnode;
        newnode->next = this->head;
        this->head = newnode;
    };

public:
    void insertNode(int position, int value)
    {
        if (position == 1)
        {
            insertBefore(value);
            return;
        }
        Node *temp = this->head;

        Node *newnode = new Node(value);
        int count = 1;
        while (count < position - 1)
        {
            temp = temp->next;
            count++;
        }
        if (temp->next == nullptr)
        {
            insertAfter(value);
            return;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next = newnode;
    }
    void deleteNode(int position)
    {
        if (position == 1)
        {
            Node *temp = this->head;
            this->head = this->head->next;
            temp->next = nullptr;
            delete temp;
        }
        else
        {
            int count = 1;
            Node *current = this->head;
            while (count < position)
            {
                current = current->next;
                count++;
            }
            if (current->next == nullptr)
            {
                this->tail = current->prev;
                current->prev->next = nullptr;
                delete current;
            }
            else
            {
                current->prev->next = current->next;
                current->next->prev = current->prev;
                current->next = nullptr;
                delete current;
            }
        }
    }
    void getMiddle()
    {
        Node *temp = this->head;
        int count = 0;
        while (temp != nullptr)
        {
            temp = temp->next;
            count++;
        }
        cout << count << endl;
    }
    void Printlist()
    {
        Node *temp = this->head;
        while (temp != nullptr)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
    }

    Node *getHead()
    {
        return head;
    }
    Node *getTail()
    {
        return tail;
    }
};
int main()
{
    DoublyLinkedList list(1);
    list.insertNode(2, 2);
    list.insertNode(3, 3);
    list.insertNode(4, 11);
    list.insertNode(5, 31);
    list.insertNode(6, 90);
    list.insertNode(7, 87);
    list.getMiddle();
    list.Printlist();
    cout << endl;
    cout << "the value of the head is :" << list.getHead()->value << endl;
    cout << "the value of the tail is :" << list.getTail()->value << endl;


    DoublyLinkedList liner(0);
    liner.insertNode(2,1);
    liner.insertNode(3,2);
    liner.insertNode(4,3);

    liner.Printlist();
};