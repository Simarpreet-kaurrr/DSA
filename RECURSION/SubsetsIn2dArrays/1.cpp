// MAZE PROBLEM / SUBSETS IN 2D ARRAYS 
#include <iostream>
using namespace std;

int maze(int m, int n){
    if(m==1 || n==1){
        return 1;
    }else{
        int x=maze(m-1,n);
        x=x+ maze(m,n-1);
        return x;
    }
}
int main(){
    int m,n; //no. of rows and columns
    // int arr[3][3]; //Creates a matrix of 3X3
    cin>>m>>n;
    cout<<maze(m,n);
    return 0;
}