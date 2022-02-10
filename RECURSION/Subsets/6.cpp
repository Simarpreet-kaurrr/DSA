// SUBSEQUENCE IN STRINGS  
#include <iostream> 
#include <vector>
#include <string>
using namespace std;

//FIRST APPROACH ✨:

// vector<string> subseq(string p, string up){
//     vector<string> *super=new vector<string>;
//     if(up.empty()){
//         super->push_back(p);
//     }else{
//         char ch=up.at(0);
//         vector<string> x= subseq(p+ch,up.substr(1));
//         for(int i=0; i<x.size();i++){
//             super->push_back(x[i]);
//         }
//         vector<string> y= subseq(p,up.substr(1));
//         for(int i=0; i<y.size();i++){
//             super->push_back(y[i]);
//         }
//     }
//     return *super;
// }

//SECOND APPROACH ✨:
vector<string> subseq(string p, string up){
    if(up.empty()){
        vector<string> *super=new vector<string>;
        super->push_back(p);
        return *super;
    }
    char ch=up.at(0);
    vector<string> x= subseq(p+ch,up.substr(1));
    vector<string> y= subseq(p,up.substr(1));
    for(int i=0; i<y.size();i++){
        x.push_back(y[i]);
    }
    return x;
}
int main(){
    string s;
    cin>>s;
    vector<string> subs=subseq("",s);
    for(int i=0; i<subs.size();i++){
        cout<<subs[i]<<" ";
    }
    return 0;
}