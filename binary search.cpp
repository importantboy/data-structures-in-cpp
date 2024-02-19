#include <iostream>

using namespace std;

int binarySearch(int a[], int n, int data)
{
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
    int mid = (l + r) / 2;
        if (data == a[mid])
        {
            return mid;
             
        }
        else if (data < a[mid])
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

    // works only on sorted array
      int size = 10;
      int a[10] = {10,12,34,56,78,90,95,98,100,120};

    // cout << "data found at index : " << binarySearch(a, size, 130);

      int check = binarySearch( a, size , 190);
       if(check == -1){
            cout << "data not found" << endl;
       }
         else{
              cout << "data found at index: " << check << endl;
         }

    return 0;
}