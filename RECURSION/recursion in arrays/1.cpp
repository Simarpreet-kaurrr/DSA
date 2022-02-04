//Checking whether the array is sorted using recursion
#include <iostream>
using namespace std;

bool helper(int n[5], int p){
    if(p == 5){
        return true;
    }
    //return n[p]<n[p+1] && helper(n,p+1);     BEST APPROACH...ELSE:-

    if(n[p]>n[p+1]){       
        return false;
    }
    else{
        return helper(n,p+1);
    }
}
bool checkSorted(int n[5]){
    int pointer=0;
    return helper(n,pointer);
}

int main(){
    int n[5];
    for(int i=0; i<5; i++){
        cin>>n[i];
    }
    cout<<checkSorted(n);
    return 0;
}