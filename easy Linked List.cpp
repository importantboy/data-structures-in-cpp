// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class Node
{
public:
     int value;
     Node *next;
     Node()
     {
          this->next = NULL;
     }
};
void insertAthead(Node *&a, int data)
{
     Node *temp = new Node();
     temp->value = data;
     temp->next = a;
     a = temp;
};

void insertAtLast(Node *&head, int data)
{
     // 1.prepare a node
     Node *newnode = new Node();
     newnode->value = data;
     newnode->next = NULL;
     // 2.if linked list is empty new node will be head node
     if (head == NULL)
     {
          head = newnode;
          return;
     }
     // 3.find the last node
     Node *last = head;
     while (last->next != NULL)
     {
          last = last->next;
     }
     // 4.insert newnode after the lastnode
     last->next = newnode;
}
// void insertAtmiddle(Node *&previousNode, int data)
// {
//      // 1.check if previous node is null
//      if (previousNode == NULL)
//      {
//           cout << "cannot add after the last node" << endl;
//           return;
//      }
//      // 2.prepare a newnode
//      Node *newnode = new Node();
//      newnode->value = data;
//      // 3.insert newnode after previous
//      newnode->next = previousNode->next;
//      previousNode->next = newnode;
// }

void nodeatmiddle(Node *&head, int position, int data)
{
     int i = 1;
     Node *checknode = new Node();
     checknode = head;
     while (checknode != NULL)
     {
          if (i == position - 1)
          {
               break;
          }
          checknode = checknode->next;
          i++;
     }
     Node *newnode = new Node();
     newnode->value = data;
     newnode->next = checknode->next;
     checknode->next = newnode;
}
void printList(Node *&n)
{
     Node *temp = new Node();
     temp = n;
     while (temp != NULL)
     {
          cout << temp->value << " ";
          temp = temp->next;
     }
}

int main()
{
     // Write C++ code here
     Node *first = new Node();
     Node *second = new Node();
     Node *third = new Node();

     first->value = 1;
     first->next = second;
     second->value = 2;
     second->next = third;
     third->value = 3;
     third->next = NULL;

     insertAthead(first, 12);
     insertAthead(first, 11);
     insertAtLast(first, 4);
     insertAtLast(first, 5);
     insertAtLast(first, 6);

     // insertAtmiddle(second, 80);
     nodeatmiddle(first, 2, 8);
     printList(first);
     return 0;
}