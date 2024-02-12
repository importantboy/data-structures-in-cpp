#include <iostream>

using namespace std;

int main()
{

    int array[100] = {2, 3, 1, 7, 8};
    int size = 5;

    int pos = 2;
    //    cout << array[size - 1];

        for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
  cout << endl;
    for (int i = size - 1; i > pos - 1; i--)
    {
        
         cout << i << " " << endl;
        array[i + 1] = array[i];
    }

      array[pos] = 10;
    
   size++;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}