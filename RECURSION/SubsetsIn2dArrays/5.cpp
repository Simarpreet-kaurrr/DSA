//MAZE PATH WITH OBSTACLES
#include <iostream>
#include <string>
using namespace std;

void mazepaths(string unp, int r, int c,int x,int y){
    if(r==x && c==y){ //obstacle coordinate return back from there
        return;
    }
    if(r==1 && c==1){  
        cout<<unp<<" ";
        return;
    }
    else if(r>0 && c>0){
        char d='D'; //Down move
        mazepaths(unp+d,r -1,c,x,y);
        char rr='R'; //Right move
        mazepaths(unp+rr,r,c-1,x,y);
        char dg='d'; //diagonal move
        mazepaths(unp+dg,r-1,c-1,x,y);
    }
}
int main(){
    int r,c; //no. of rows and columns
    cin>>r>>c;
    int xo, yo;
    cin>>xo>>yo; //x and y coordinates of obstacle
    string unp="";
    mazepaths(unp,r,c,xo,yo);
    return 0;
}