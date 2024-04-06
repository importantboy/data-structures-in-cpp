#include <iostream>

using namespace std;

int recurse(int num, int count)
{
    if (count == num)
    {
        return -1;
    }
    cout << count << endl;
    count++;
    return recurse(num, count);
}
int main()
{
    cout << "enter the number to print " << endl;
    int n;
    cin >> n;
     recurse(n, 1);
    return 0;
};