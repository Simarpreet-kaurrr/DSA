//Checking Palindrome using recursion
//A palindrome is a number or a word whose reverse is same as the original 

#include <iostream>
#include <cmath>
using namespace std;

//592

int reverse(int n){
    int m = int(log10(n));
    if(n%10==n){
        return n;
    }
    return n%10 * pow(10,m) + reverse(n/10);
}
bool palindrome(int n){
    if (n==reverse(n)){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<palindrome(n);
    return 0;
}