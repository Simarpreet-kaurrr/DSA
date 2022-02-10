// MAZE PROBLEM PRINTING PATHS 
#include <iostream>
#include <string>
using namespace std;

void mazepaths(string unp,int m, int n,string ma){
    if(m<1 || n<1){
        return;
    }
    if(m==1 && n==1){
        cout<<unp<<endl;
        return;
    }
    else if(m>0 && n>0){
        char d=ma.at(0);
        mazepaths(unp+d,m-1,n,ma);
        char r=ma.at(1);
        mazepaths(unp+r,m,n-1,ma);
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    string movesallowed="DR";
    string unp="";
    mazepaths(unp,m,n,movesallowed);
    return 0;
}