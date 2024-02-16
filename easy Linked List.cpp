// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class Node{
    public:
    int value;
    Node* next;
     Node(){
          this->next = NULL;
     }
};
 void insertAthead(Node* &a , int data){
      Node* temp = new Node();
      temp->value = data;
      temp->next = a;
       a = temp;
 }

 void inserInMiddle(Node* &head,int position ,int data){
      int i = 0;
       while (head != NULL)
       {
        head = head->next;
        //  cout << i << endl;
         i++;
       }
       
 }
void printList(Node* &n){
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
     
     insertAthead(first , 12);
     insertAthead(first , 11);

      inserInMiddle(first , 2 , 50);
     printList(first);
return 0;
}