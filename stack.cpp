#include<iostream>
#include<stack>
using namespace std;

int main(){
    //stack implementation

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.pop();
    cout << s.size() << endl;
    cout << s.top() << endl;


    int size = 5;
    int top = -1;
    int check = size - top;
    cout << check << endl;
     return 0;
}