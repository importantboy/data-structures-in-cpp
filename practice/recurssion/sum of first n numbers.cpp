#include <iostream>

using namespace std;

int sums = 0;
int sum(int num, int count)
{
    if (num == count)
    {
        return -1;
    }
    count++;
    sums += count;
    sum(num, count);
    return sums;
};

int main()
{

    cout << "enter the number to find the sum upto: ";
    int n;
    cin >> n;

    cout << sum(n, 0) << endl;
    return 0;
}