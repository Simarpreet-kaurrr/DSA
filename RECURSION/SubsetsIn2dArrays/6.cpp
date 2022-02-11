//MAZE PATH WITH OBSTACLES another method with created maze in the form of a 2d array
// The only non flexible program in the maze playlist 

#include <iostream>
#include <string>
using namespace std;

// void mazepaths(string unp, int r, int c,int maze [][3]){  //Passing 2d array method 1 (specifying column size)

void mazepaths(string unp, int r, int c,int maze [][3]){  //Passing 2d array method 2 (passing pointer to the array)
    if(r<3 && c<3){
        if(maze[r][c]==0){
            return;
        }
    }
    if(r==2 && c==2){  
        cout<<unp<<" ";
        return;
    }
    else if(r<3 && c<3){
        char d='D'; //Down move
        mazepaths(unp+d,r+1,c,maze);
        char rr='R'; //Right move
        mazepaths(unp+rr,r,c+1,maze);
        char dg='d'; //diagonal move
        mazepaths(unp+dg,r+1,c+1,maze);
    }
}
int main(){

    //Creating a matrix maze:
    int maze[3][3]={{1,1,1},{1,0,1},{1,1,1}}; //0 means obstacle
    string unp="";
    mazepaths(unp,0,0,maze);
    return 0;
}