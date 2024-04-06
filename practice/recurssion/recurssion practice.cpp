#include<iostream>

using namespace std;
int count = 0;

 void check(){
    if(count == 1200){
        return;
    }
    cout << count << endl;
    count++;
    check();
 }
int main(){

check();
    return 0;
}