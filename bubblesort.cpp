#include <iostream>

using namespace std;

void bubbleSort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
             if(array[j] > array[j + 1]){
                    int temp;
                     temp = array[j];
                     array[j] = array[j + 1];
                      array[j + 1] = temp;
             }
        }
    }
};

void PrintArray(int array[]){
    cout << "printing sorted array"<<endl;
    for(int i = 0; i < 5; i++){
         cout << array[i] << " ";
    }
}
int main()
{
    int array[5] = {5, 3, 1, 7, 8};
     bubbleSort(array,5);
     PrintArray(array);
    return 0;
};
