#include <iostream>

using namespace std;

void printarray(int array[], int size);
void addelement(int array[], int size, int number, int index);

void printarray(int array[], int size) {
    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
}


void addelement(int array[], int size, int number, int index) {
    for (int i = size - 1; i >= index; i--) {
        array[i + 1] = array[i];
    }
    array[index] = number;   
}

int main() {
    int array[100] = {2, 3, 4, 5, 6, 9};

    int size = 6;
    cout << "Elements before insertion: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    addelement(array, size, 5, 0);
    addelement(array, size , 100, 4);
    addelement(array, size , 30, 5);
    addelement(array, size , 80, 6);
     size+=1;
    printarray(array , size);
    return 0;
}