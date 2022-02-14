//BACKTRACKING
// (Solving stack overflow problem introduced in previous programs)

#include <iostream >
#include <string>
using namespace std;

void allpaths(string unp, int r, int c){
    if(r==1 && c==1){ //reached target/end of maze
        cout<<unp<<endl;
        return;
    }
    if(r>1){
        char d='D'; //DOWN
        allpaths(unp+d,r-1,c);
    } 
    if(c>1){
        char rr='R'; //RIGHT
        allpaths(unp+rr,r,c-1);
    }
    if(r<3){
        char l='L'; //UP
        allpaths(unp+l,r+1,c);
    }
    if(c<3){
        char u='U'; //UP
        allpaths(unp+u,r,c+1);
    }
}
int main(){
    int r,c; //no. of rows and columns
    cin>>r>>c;
    string unp="";
    allpaths(unp,r,c);
    return 0;
}