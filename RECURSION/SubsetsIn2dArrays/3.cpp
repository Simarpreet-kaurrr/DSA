//RETURNING AND PRINTING ARRAY LIST OF PATHS, moves allowed: down and right
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> mazepaths(string unp, int r, int c){
    vector<string> *paths=new vector <string>;
    if(r==1 && c==1){ //reached target/end of maze
        // cout<<unp<<endl;
        paths->push_back(unp);
    }
    else if(r>0 && c>0){
        char d='D'; //D
        vector<string> left=mazepaths(unp+d,r-1,c);
        char rr='R'; //R
        vector<string> right=mazepaths(unp+rr,r,c-1);
        for(int i=0 ;i<left.size();i++){
            paths->push_back(left[i]);
        }
        for(int i=0 ;i<right.size();i++){
            paths->push_back(right[i]);
        }
    }
    return *paths;
}
int main(){
    int r,c; //no. of rows and columns
    cin>>r>>c;
    string unp="";
    vector <string> paths=mazepaths(unp,r,c);
    for(int i=0; i<paths.size(); i++){
        cout<<paths[i]<<" ";
    }
    return 0;
}