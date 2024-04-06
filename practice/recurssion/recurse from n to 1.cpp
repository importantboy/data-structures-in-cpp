#include<iostream>

using namespace std;

int recurseInReverse(int num , int count){
   if(num == count){
        return -1;
   }
   num--;
   cout << num << endl;
   return recurseInReverse(num , count);
}
int main(){

  cout << "enter the number to start the print :" << endl;
   int n;
  cin >> n;
  recurseInReverse(n , 1);
    return 0;
}