#include<iostream>

using namespace std;

void printfunction(int* a , int* b){
     cout << *a + *b << endl;
}
int main(){
  int check = 10;
   int anothercheck = 20;

     printfunction(&check , &anothercheck);
     printfunction(&check , &anothercheck);
     printfunction(&check , &anothercheck);
     printfunction(&check , &anothercheck);
     printfunction(&check , &anothercheck);
     return 0;
}