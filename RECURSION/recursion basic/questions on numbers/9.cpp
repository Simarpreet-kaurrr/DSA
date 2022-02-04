//Count zeroes in a number using recursion

#include <iostream>
using namespace std;

//90050 
//count 0 1 2

static int count;
//(Special example where the same value is being returned to all the above function calls)
int countz(int n){
    if(n%10==n){ //Base condition
        return count;
    }
    if(n%10==0){
        count=count+1;
    }
    return countz(n/10);
}

int main(){
    int n;
    cin>>n;
    cout<<countz(n);
    return 0;
}