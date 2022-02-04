// Print n to 1 using recursion
#include <iostream>
#include <cmath>
using namespace std;

void fun(int n) //prints n to 1
{
    if (n < 1)
    {
        return;
    }
    cout << n << " ";
    fun(n - 1);
}
void rev(int n) //prints 1 to n
{
    if (n < 1)
    {
        return;
    }
    rev(n - 1);
    cout << n << " ";
}
void both(int n) //prints both 1 to n and n to 1
{
    if (n < 1)
    {
        return;
    }
    cout << n << " ";
    both(n - 1);
    cout << n << " ";
}
int main()
{

    int n = 5;
    fun(n);
    cout<<endl;
    rev(n);
    cout<<endl;
    both(n);
    return 0;
}