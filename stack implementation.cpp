#include <iostream>

using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        this->size = size;
        arr = new int(size);
        top = -1;
    }

    void push(int value)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = value;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }

    void peek()
    {
        if (top >= 0)
        {
            cout << arr[top] << endl;
        }
        else
        {
            cout << "stack empty" << endl;
        }
    }

    bool isEmpty(){
         if(top == -1){
             return 1;
         }
          else{
              return 0;
          }
    }
};

int main()
{
    Stack s(5);

    // s.push(12);
    // s.push(33);
    // s.push(12);
    // s.push(90);
    // s.push(98);

   s.pop();
   s.pop();
    s.peek();
   cout << s.isEmpty() << endl;
    return 0;
}