// Binary Search Tree using recursion
#include <iostream>
using namespace std;

int bst(int a[], int target, int s, int e)
{
    int m = (s + e) / 2;
    if (s > e)
    {
        return -1;
    }
    else if (a[m] == target)
    {
        return m;
    }
    else if (a[m] > target)
    {
        return bst(a, target, s, m - 1);
    }
    else
    {
        return bst(a, target, m + 1, e);
    }
}
int main()
{
    int a[5] = {2, 4, 6, 8, 10};
    int target, s = 0, e = sizeof(a) / 4;
    cout << "Enter the target to be searched: " << endl;
    while (2 < 3)
    {
        cin >> target;
        cout << bst(a, target, s, e);
    }
    return 0;
}