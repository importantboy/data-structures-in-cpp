#include <iostream>

using namespace std;

static int counter = 0;
// insertion in sorted array
void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int insertInsortedArray(int array[], int size, int capacity, int number)
{
     counter++;
    int pos = size; // Initialize pos to the last index + 1

    if (size >= capacity)
    {
        return -1;
    }

    for (int i = 0; i < size; i++)
    {
        if (array[i] > number)
            //  2,3,4,6,7,8 
        {
            pos = i;
            break; // Break the loop once the correct position is found
        }
    }

    for (int i = size; i > pos; i--)
    {
        //  cout << "check " << i << endl;
        array[i] = array[i - 1];
        // array[i + 1] = array[i];
        // array[5] = array[4];
    }

    array[pos] = number;
    return pos;
}

int main()
{
    int capacity = 50;
    int array[50] = {2, 3, 4, 6, 7, 8};
    int size = 6;

    insertInsortedArray(array, size + counter, capacity, -1);
    // insertInsortedArray(array, size + counter, capacity, 10);
    // insertInsortedArray(array, size + counter, capacity, 15);
    // insertInsortedArray(array, size + counter, capacity, 80);
    // insertInsortedArray(array, size + counter, capacity, 58);
    // insertInsortedArray(array, size + counter, capacity, 35);
    size += 1;
    display(array, size + counter-1);

    return 0;
}
