#include <iostream>
using namespace std;
void print1()
{
    cout << "1" << endl;
    print2();
}
void print2()
{
    cout << "2" << endl;
    print3();
}
void print3()
{
    cout << "3" << endl;
    print4();
}
void print4()
{
    cout << "4" << endl;
    print5();
}
void print5()
{
    cout << "5" << endl;
}
int main()
{
    print1();
    return 0;
}