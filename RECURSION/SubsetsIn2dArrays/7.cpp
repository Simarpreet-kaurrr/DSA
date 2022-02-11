// MAZE PROBLEM PRINTING PATHS, moves allowed: LEFT,UP,DOWN,RIGHT



#include <iostream >
#include <string>
using namespace std;

void allpaths(string unp, int r, int c){
    if(r==1 && c==1){ //reached target/end of maze
        cout<<unp<<endl;
        return;
    }
        if(r>1 && c>1){
            char d='D'; //DOWN
            allpaths(unp+d,r-1,c);
            char rr='R'; //RIGHT
            allpaths(unp+rr,r,c-1);
            char u='U'; //UP
            allpaths(unp+u,r+1,c);
        }
        // if(r<3){
        // }if(c<3){
        //     char l='L'; //LEFT
        //     allpaths(unp+l,r,c+1);
        // }
    // }
}
int main(){
    int r,c; //no. of rows and columns
    cin>>r>>c;
    string unp="";
    allpaths(unp,r,c);
    return 0;
}