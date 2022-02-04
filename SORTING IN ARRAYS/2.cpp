//SELECTION SORT ~ Selecting an ele from the array and putting in its right position/index
#include <iostream>
using namespace std;
int * selectionSort(int A[],int n){
//Loop + Recursion
    // if(n==1){
    //     return A;
    // }
    // bool swapped=false;
    // int max=A[n-1];
    // int indexswap;
    // for(int i=0; i<(n-1); i++){
    //     if(A[i]>max){
    //         max=A[i];
    //         indexswap=i;
    //         swapped=true;
    //     }
    // }
    // if(swapped==true){ 
    //     int temp=A[n-1];
    //     A[n-1]=max;
    //     A[indexswap]=temp;
    // }
    // return selectionSort(A,n-1);

//PURE RECURSION
    int end = n;
    bool swapped=false;
    int max=A[n-1];
    int indexswap;
    if(end == 1){
        return A;
    }
    if(n>1){
        if(A[n-2]>max){
            max=A[n-2];
            indexswap=n-2;
            swapped=true;
        }
        if(swapped==true){ 
            int temp=A[n-1];
            A[n-1]=max;
            A[indexswap]=temp;
        }
        return selectionSort(A,n-1);
    }else{
        return selectionSort(A,end-1);
    }

    /* NESTED LOOPS
        for(int i=n; i>0; i--){
            bool swapped=false;
            int max=A[i-1];
            int iswap;
            for(int j=0; j<(i-1); j++){
                if(A[j]>max){
                    max=A[j];
                    iswap=j;
                    swapped=true;
                }
            }
            if(swapped==true){
                int temp=A[i-1];
                A[i-1]=max;
                A[iswap]=temp;
            }
        }
        return A;
    */
}
int main(){
    int A[]={-2,5,-18,1,0,1,10};
    int n=sizeof(A)/4;
    for(int i=0; i<n; i++){
        cout<<*(selectionSort(A,n)+i)<<" ";
    }
    return 0;
}