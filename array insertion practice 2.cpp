// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int insertelement(int array[], int *size, int number)
{
    int pos = *size;
    for (int i = 0; i < *size; i++)
    {
        if (array[i] > number)
        {
            pos = i;
            break;
        }
    }

    for (int i = *size - 1; i > pos - 1; i--)
    {
        array[i + 1] = array[i];
    }

    array[pos] = number;
    *size+=1;
    return 0;
}

int deleteElement(int array[], int *size, int number)
{
    int pos = -1;
    for (int i = 0; i < *size; i++)
    {
        if (array[i] == number)
        {
            pos = i;
        }
    };
    for (int i = pos; i < *size - 1; i++)
    {
        array[i] = array[i + 1];
    }
     *size-=1;
    return pos;
}

int main()
{
    int array[50] = {1, 2, 4, 5, 6, 8, 9};
    int size = 7;


    insertelement(array, &size, 7);
    insertelement(array, &size, 3);
    insertelement(array, &size, 15);
    insertelement(array, &size, 10);
    insertelement(array, &size, 12);
    insertelement(array, &size, 11);

    cout << "array before deletion :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
   cout << endl;
    cout << "array after deletion :" << endl;
    deleteElement(array , &size , 5);
    deleteElement(array , &size , 1);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    //  cout <<"size of the array " <<size << endl;

    return 0;
};


