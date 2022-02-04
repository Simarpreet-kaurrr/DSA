// Printing normal triangle using recursion without using loops 
// *
// **
// ***
// ****
#include <iostream>
using namespace std;
void printTriangle2(int r, int c){
    if(r==0){
        return;
    }
    if(c<r){
        printTriangle2(r,c+1);
        cout<<"*";
    }
    else{
        printTriangle2(r-1,c=0);
        cout<<endl;
    }
}
int main(){
    int r,c;
    cin>>r;
    printTriangle2(r,0);
    return 0;

}