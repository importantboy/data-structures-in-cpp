#include <iostream>
#include<vector>

using namespace std;

int search(int arr[5], int number)
{
    for (int i = 0; i < 5; i++)
    {
        if(arr[i] == number){
             return i;
        }
         
    }
      return -1;
};


int main()
{

    int arr[5] = {2,5,7,6,7,};
    cout <<"element found at " << search(arr,5);

    return 0;
}