#include <iostream>

using namespace std;

void bubbleSort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int flag = 0;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp;
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
};
int main()
{
    // Write C++ code here
    int array[] = {-2, 1, 9, 0, 7, 9, 5, 7};
    int size = sizeof(array) / sizeof(array[0]);

    bubbleSort(array, size);

    cout << "output for the array :";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    };

    return 0;
}