//Counting the number of permutations 
#include <iostream>
#include <string>
using namespace std;

int permut(string unp, string p){
    int count=0;
    if(p.empty()){
        count=count+1;
    }else{
        for(int i=0; i<=unp.length();i++){
            string f=unp.substr(0,i);
            string ch=p.substr(0,1);
            string s=unp.substr(i);
            int x=permut(f+ch+s, p.substr(1));
            count=count+x;
        }
    }
    return count;
}

int main(){
    string s;
    cin>>s;
    cout<<permut("",s);
    return 0;
}