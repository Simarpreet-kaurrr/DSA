// Display a string that has removed all the a's from the given string //3rd method
#include <iostream>
#include <string>
using namespace std;
string removeA3(string A){
    string ans;
    if(A.empty()){
        return ans;
    }
    if(A[0]!='a'){
        ans.push_back(A.at(0));
    }
    string let=removeA3(A.substr(1)); //means 1 to end
    for(int i=0;i<let.length();i++){
        ans.push_back(let[i]);
    }
    return ans;
}
int main(){
    string a;
    getline(cin,a);
    string ans;
    ans=removeA3(a);
    for(int i=0; i<ans.length();i++){
        cout<<ans[i];
    }
    return 0;
}