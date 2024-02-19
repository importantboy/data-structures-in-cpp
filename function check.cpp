#include <iostream>

using namespace std;

int binarySearch(int array[], int size, int data)
{
    int l = 0;
    int r = size - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (data == array[mid])
        {
            return mid;
        }
        else if (data < array[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int capacity = 50;
    int array[capacity] = {2, 3, 5, 6, 7, 9};
    int size = 6;
    int check = binarySearch(array, size, 2);
    cout << check << endl;

    return 0;
}