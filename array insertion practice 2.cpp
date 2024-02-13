// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int insertelement(int array[] , int size , int capacity , int number){
    int pos= size;
    for(int i = 0; i  < size; i++){
         if(array[i] > number){
              pos = i;
                break;
         }
    }
    
    for(int i = size - 1; i > pos - 1; i--){
          array[i + 1] = array[i];
    }
    
    array[pos] = number;
}
using namespace std;
int main() {
     int capacity = 50;
    int array[50] = {1,2,4,5,6,8,9};
    int size = 7;
    
    insertelement(array, size, capacity , 7);
    insertelement(array, size + 1, capacity , 3);
    insertelement(array, size + 2, capacity , 9);
    insertelement(array, size + 2, capacity , 10);
    insertelement(array, size + 3, capacity , 12);
    insertelement(array, size + 4, capacity , 11);
    size+=1;
    for (int i = 0; i < size + 4; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}