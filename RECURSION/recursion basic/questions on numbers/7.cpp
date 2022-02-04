//Reverse a number using recursion | 2nd way
#include<iostream>
using namespace std;

//592
static int sum=0;
void reverse(int n){
    if(n==0){
        return;
    }
    sum= sum*10 +n%10;
    reverse(n/10);
}
int main(){
    int n;
    cin>>n;
    reverse(n);
    cout<<sum;
    return 0;
}