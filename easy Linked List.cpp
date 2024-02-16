// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class Node{
    public:
    int value;
    Node* next;
};

void printList(Node* n){
     Node* temp = new Node();
      temp = n;
     while(temp!= NULL){
          cout << temp->value << " ";
            temp = temp -> next;
     }
}
int main() {
    // Write C++ code here
     Node* first = new Node();
     Node* second = new Node();
     Node* third = new Node();
     
     
     first->value = 1;
     first->next = second;
     second->value = 2;
     second->next = third;
     third->value = 3;
     third->next = NULL;
     
     printList(first);
return 0;
}