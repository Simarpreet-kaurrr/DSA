//Display the word eliminating the substring 'app' but not when it is written as apple
#include <iostream>
#include <string>
using namespace std;

string skipApp2(string A){
    static string ans;
    if(A.empty()){
        return ans;
    }
    if(A.find("app")==0 && A.find("apple")!=0){
        return skipApp2(A.substr(3));
    }else{
        ans.push_back(A.at(0));
        return skipApp2(A.substr(1));
    }
}
int main(){
    string A;
    getline(cin,A);
    string ans= skipApp2(A);
    for(int i=0; i<ans.length();i++){
        cout<<ans[i];
    }
    return 0;
}