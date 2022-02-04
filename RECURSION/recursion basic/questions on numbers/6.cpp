//Reverse a number using recursion
#include <iostream>
#include <cmath>
using namespace std;

int reverse(int n){
    int m = int(log10(n)) ;
    if(n==0){
        return n; //return 0;
    }
    else{
        return (n%10)*pow(10,m) + reverse(n/10) ;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<reverse(n);
    return 0;
}