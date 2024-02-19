#include<iostream>


using namespace std;

int main(){

    int temp;
    int a = 10;
    int b = 20;

    temp = a;
    a = b;
    b = temp;
    // temp = b;
     cout << a << endl;
    //  cout << temp << endl;
     cout << b << endl;
     return 0;
}