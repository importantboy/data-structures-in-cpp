#include<iostream>

using namespace std;

int fibbo(int num){
    if(num <= 1){
         return num;
    }
      return fibbo(num - 1) + fibbo(num - 2);
}
int main(){

 cout << fibbo(55) << endl;

    return 0;
}