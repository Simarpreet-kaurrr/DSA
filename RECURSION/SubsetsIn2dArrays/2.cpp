// r AZE PROBLEr  PRINTING PATHS 
#include <iostream >
#include <string>
using namespace std;

void mazepaths(string unp, int r, int c,string ma){
    if(r<1 || c<1){
        return;
    }
    if(r ==1 && c==1){
        cout<<unp<<endl;
        return;
    }
    else if(r>0 && c>0){
        char d=ma.at(0); //D
        mazepaths(unp+d,r -1,c,ma);
        char rr=ma.at(1); //R
        mazepaths(unp+rr,r,c-1,ma);
    }
}
int main(){
    int r,c; //no. of rows and columns
    cin>>r>>c;
    string movesallowed="DR";
    string unp="";
    mazepaths(unp,r,c,movesallowed);
    return 0;
}