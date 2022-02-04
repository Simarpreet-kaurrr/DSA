//Count the no. of steps to reduce a number to 0 given condition:- If the no. is even divide it by 2, else subtract it by 1

#include <iostream>
using namespace std;

static int count;
int countSteps(int n){
    if (n==0){
        return count;
    }
    count=count+1;
    if(n%2==0){
        return countSteps(n/2);
    }
    else{
        return countSteps(n-1);
    }
}

int main(){
    int n;
    cin>>n;
    cout<<countSteps(n);
    return 0;
}