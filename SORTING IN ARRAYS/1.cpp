// BUBBLE SORT/ EXCHANGE SORT/ SINKING SORT
#include <iostream>
using namespace std;

//8 2 4 5 1
//2 4 5 1 8  first pass
//2 4 1 5 8  second pass
//2 1 4 5 8  third pass
//1 2 4 5 8

int* bubbleSort(int A[], int n){
/* Loop + Recursion 
    int swapped=false;
    if(n==1){
        return A;
    }
    for(int i=0; i<(n-1); i++){
        if(A[i]>A[i+1]){
            int temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp;
            swapped=true;
        }
    }
    if(swapped==false){
        return  A;
    }
    else{
        return bubbleSort(A,n-1);
    } 
*/
/* CODE USING NESTED LOOPS :-
    
    for(int i=n; i>1; i--){
        int swapped=false;
        for(int j=0;j<(i-1); j++){
            if(A[j]>A[j+1]){
                //swap
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                swapped=true;
            }
        }
        if(swapped=false){
            return A;
        }
    }
    return A;
    */

//Pure Recursion
    int end =n;
    int swapped=false;
    if(end == 1){
        return A;
    }
    if(n>1){
        if(A[n-1]<A[n-2]){
            int temp=A[n-1];
            A[n-1]=A[n-2];
            A[n-2]=temp;
            swapped=true;
        }
        bubbleSort(A,n-1);
    }
    else{
        if(swapped==false){
            return  A;
        }
        else{
            return bubbleSort(A,end-1);
        }
    }

}
int main(){
    int A[]={-8,2,4,-5,1};
    int n=sizeof(A)/4;
    for(int i=0; i<n; i++){
        cout<<*(bubbleSort(A,n)+i)<<" ";
    }
    return 0;
}

//reference of array is not allowed even int *p=&A is not allowed
// making n pointers for n values of array

/*  int *p=&A not allowed
    ARRAY POINTER int *p=A => p points to the first ele of array A, p+1 second ele, p+2 third and so on
    POINTER TO AN ARRAY int (*p)[n] = &A Here p points to the whole array, *(*p+1) gives second ele, *(*p+2) gives 3rd ele and so on
    ARRAY OF POINTERS int *p[n].. for(int i=0; i<n; i++){ p[i]=&A[i] } //Simplest method

*/



