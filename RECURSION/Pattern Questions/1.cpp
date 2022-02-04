/* Print    * * * * 
            * * *
            * *
            *  using recursion (without using loops) */

#include <iostream>
using namespace std;
void patternTriangle(int c, int r){
    if(r == 0){
        return;
    }
    if((3-c)<r){
        cout<<"*"<<" ";
        patternTriangle(c-1,r);
        // c=c-1  //4 3 2 1
    }
    else{
        cout<<endl;
        patternTriangle(3,r-1);
    }
}
int main(){
    int c,r; //no. of columns and rows respectively
    cin>>c>>r; 
    patternTriangle(c,r);
    return 0;
}


