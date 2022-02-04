//Linear search in array using recursion
#include <iostream>
using namespace std;

bool linearSearch(int n[], int t, int i){ //Checks whether element is present in the array or not
    if(i>4){
        return false;
    }
    return (t==n[i]) || linearSearch(n,t,i+1);
}
int getIndex(int n[], int t, int i){ //Calculates the index of element if present
    if(i>4){
        return -1;
    }
    if(n[i]==t){
        return i;
    }
    return getIndex(n,t,i+1);
}

int main(){
    int n[5]={2,3,8,1,0};
    int target;
    cin>>target;
    if(linearSearch(n,target,0) ==1){
        cout<<getIndex(n,target,0);
    }
    return 0;
}