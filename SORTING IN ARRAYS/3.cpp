//MERGE SORT (USING RECURSION):-
#include <iostream>
#include <vector>
using namespace std;

//8,3,4,12,5,6
int * mergeSort(int A[], int n){
    // vector<int> *subresult= new vector<int>;
    if(n==1){
        return A;
    }
    int x=(n/2);
    cout<<"x"<<x<<" ";
    int B[x];
    for(int i=0; i<x;i++){
        B[i]=A[i];
    }
    int *left= mergeSort(B,x);
    int y=n-x;
    cout<<"y"<<x<<" ";
    int C[y];
    for(int i=0;i<y;i++){
        C[i]=A[x+i];
    }
    int *right = mergeSort(C,y);

    int l,r,a=0;
    static int *toreturn=new int[x+y];
    while(l<x && r<y){
        if(*(left+l)<*(right+r)){
            *(toreturn+a)=*(left+l);
            l++;
        }else{
            *(toreturn+a)=*(right+r);
            r++; 
        }
        a++;
    }
    while(l<x){
        *(toreturn +a)=*(left+l);
        l++;
        a++;
    }
    while(r<y){
        *(toreturn +a)=*(right+r);
        r++;
        a++;
    }
    
    return toreturn;
}


int main(){
    int A[]={8,3,4,12,8,9,2,3};
    int n=sizeof(A)/4;
    for(int i=0; i<n; i++){
        cout<<*(mergeSort(A,n)+i)<<" ";
    }
    return 0;
}