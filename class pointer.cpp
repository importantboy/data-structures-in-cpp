#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    int* ptr = (int*)malloc(sizeof(int));
    if (ptr == nullptr) {
        cout << "Memory allocation failed." << endl;
        return 1;  // Return an error code
    }

    // Accessing the allocated memory
    cout << *ptr;

    // Don't forget to free the allocated memory
    free(ptr);

    return 0;
}
