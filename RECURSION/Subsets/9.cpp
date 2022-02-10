// Permutations
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> permut(string unp, string p){
    vector <string> *ans=new vector<string>;
    if(p.empty()){
        ans->push_back(unp);
    }else{
        for(int i=0; i<=unp.length();i++){
            string f=unp.substr(0,i);
            string ch=p.substr(0,1);
            string s=unp.substr(i);
            vector<string> x=permut(f+ch+s, p.substr(1));
            for(int j=0; j<x.size();j++){
                ans->push_back(x[j]);
            }
        }
    }
    return *ans;
}

int main(){
    string s;
    cin>>s;
    vector<string> p=permut("",s);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
    return 0;
}