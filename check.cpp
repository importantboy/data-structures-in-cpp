// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
// finding the largest element in the array

int compare(int array[], int size)
{
    int current = array[0];
    for (int i = 0; i < size ; i++)
    {
         if(current < array[i]){
            current = array[i];
         }
    }
    cout << "current greatest element in the array is " << current << endl;
    return 1;
}

int main()
{

    int array[5] = {2, 5, 6, 8, 1};
    int size = sizeof(array) / sizeof(array[0]);
    compare(array, size);

    return 0;
}