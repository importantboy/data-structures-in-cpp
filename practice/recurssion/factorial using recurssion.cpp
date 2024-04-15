#include <iostream>

using namespace std;

int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    // else if (num == 1)
    // {
    //     return 0;
    // }
    else
    {
        return num * factorial(num - 1);
    }
};
int main()
{
    cout << "enter the number to find the factorial :";
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}