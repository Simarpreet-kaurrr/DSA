//MAZE PATH IF DIAGONAL MOVE IS ALSO ALLOWED
#include <iostream>
#include <string>
using namespace std;

void mazepaths(string unp, int r, int c){
    if(r==1 && c==1){ //reached target/end of maze
        cout<<unp<<" ";
        return;
    }
    else if(r>0 && c>0){
        char d='D'; //Down move
        mazepaths(unp+d,r -1,c);
        char rr='R'; //Right move
        mazepaths(unp+rr,r,c-1);
        char dg='d'; //diagonal move
        mazepaths(unp+dg,r-1,c-1);
    }
}
int main(){
    int r,c; //no. of rows and columns
    cin>>r>>c;
    string unp="";
    mazepaths(unp,r,c);
    return 0;
}