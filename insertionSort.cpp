#include <iostream>

using namespace std;

void insertionSort(int array[] , int size){
     for(int i = 0; i < size; i++){
          int temp = array[i];
           int j = i - 1;
           while (j >=0 && array[j] > temp)
           {
            array[j + 1] = array[j];
             j--;
           }
           array[j + 1] = temp;
     }
}
int main()
{
    // Write C++ code here
    int array[] = {-10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(array) / sizeof(array[0]);

     insertionSort(array, size);
     cout << "size of the array is " << size << endl;
    cout << "algorithm used insertionSort :";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    };

    return 0;
}