#include <iostream>

using namespace std;

int sum(int num, int count)
{
    if (num == count)
    {
        return -1;
    }
    count += num;
    cout << count << endl;
    return sum(num , count);
};
int main()
{

    cout << "enter the number to find the sum upto: ";
    int n;
    cin >> n;

    sum(n, 1);
    return 0;
}