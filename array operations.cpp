#include<iostream>

using namespace std;

int main(){
   int size;
    cout << "enter the size of the array :";
        cin >> size;
         if(!size){
             size = 5;
         }
  int array[size];

    for(int i = 0; i < size; i++){
          cin >> array[i];
    }
 cout << "array before insertion " << endl;
 for(int i: array){
     cout << i <<" ";
 }

 cout << "array after insertion :" << endl;
    return 0;
}