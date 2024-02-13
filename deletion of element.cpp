#include <iostream>

using namespace std;

int deleteElement(int array[], int size, int number)
{
    int pos = -1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == number)
        {
            pos = i;
        }
    };
    for(int i = pos; i < size - 1; i++){
              array[i] = array[i + 1];
    }
    return pos;
}
int main()
{

    int array[50] = {10, 20, 30, 40, 50};
    int size = 5;

    deleteElement(array, size, 20);
       size-=1;
    for (int i = 0; i < size + 2; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}