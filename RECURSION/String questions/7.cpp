// SUBSEQUENCE IN STRINGS USING ITERATIONS
#include <iostream> 
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<string> p={""};
    vector<string> sub={""};
    for(int j=0; j<s.length();j++){
        for(int i=0; i<p.size();i++){
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