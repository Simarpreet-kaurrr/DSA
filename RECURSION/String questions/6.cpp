// SUBSEQUENCE IN STRINGS 
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> subseq(string x, string k){
    vector<string> *super=new vector<string>;
    static string unpd;
    if(x.empty()){
        super->push_back(unpd);
        // unpd.clear();
        return *super;
    }else{
        vector<string> j=  subseq(x.substr(1),k);
        for(int i=0;i<j.size();i++){
            super->push_back(j[i]);
        }
        unpd.push_back(x.at(0));
        vector<string> m= subseq(x.substr(1),k);
        for(int i=0;i<m.size();i++){
            super->push_back(m[i]);
        }
    }
    return *super;
}
int main(){
    string s;
    string unp=" ";
    cin>>s;
    vector<string> subs=subseq(s,s);
    cout<<subs.size();
    for(int i=0; i<subs.size();i++){
        cout<<subs[i]<<" ";
    }
    return 0;
}