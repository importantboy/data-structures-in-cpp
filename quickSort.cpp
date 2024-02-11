// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
//creating partition

int partition(int array[] , int lb ,int up){
    int pivot = array[lb];
    int start = lb;
    int end = up;
    
    while(start < end){
        while(array[start] <= pivot){
              start++;
        }
        while(array[end] > pivot){
              end--;
        }
        if(start < end){
            swap(array[start] , array[end]);
        }
    }
    
    swap(array[lb] , array[end]);
    cout << end << " ";
    return end;
};
void quicksort(int array[], int lb , int up){
    if(lb < up){
         int loc = partition(array , lb , up);
        //  cout << loc<< " ";
         quicksort(array, lb , loc - 1);
         quicksort(array , loc + 1, up);
    }
};

int main() {
                //   0,1,2,3,4,5
     int array[] = {2,4,-1,0,8,-2};
      int size = sizeof(array) / 4;
      
     quicksort(array , 0 , size - 1);
      cout << "checked successfully" << endl;
       for(int i: array){
            cout << i << " ";
       }
    return 0;
}