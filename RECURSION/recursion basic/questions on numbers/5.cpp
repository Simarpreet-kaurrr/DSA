//Sum of digits in a number using recursion
#include <iostream>
using namespace std;

// 496
int sumofdigits(int n){
    int d = n / 10;
    int r = n % 10;

    if (d==0){
        return n;
    }
    else{
        return r+ sumofdigits(d);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << sumofdigits(n);
    return 0;
}