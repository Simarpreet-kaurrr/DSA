// SUBSEQUENCE IN STRINGS WITH DUPLICATE ELEMENTS 
#include <iostream> 
#include <vector>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<string> p={""};
    vector<string> sub={""};
    int start,end;
    for(int j=0; j<s.length();j++){
        if(j>0 && s[j]==s[j-1]){
            start=end;
        }else{
            start=0;
        }
        end=p.size();
        for(int i=start; i<end;i++){
            string x= p[i]+s[j];
            sub.push_back(x);
        }
        p=sub;
    }
    for(int k=0; k<sub.size();k++){
        cout<<sub[k]<<" ";
    }
    return 0;
}