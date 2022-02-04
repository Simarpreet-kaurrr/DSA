//Eliminate the substring apple from a given string
#include<iostream>
#include <string>
using namespace std;

//bassapplead
string skipApple(string A){
    static string ans;
    if(A.empty()){
        return ans;
    }
    if((A.find("apple"))==0){
        return skipApple(A.substr(5));
    }else{
        ans.push_back(A[0]);
        return skipApple(A.substr(1));
    }
}
int main(){
    string A;
    getline(cin,A);
    string ans= skipApple(A);
    for(int i=0;i<ans.length();i++){
        cout<<ans.at(i);
    }
    return 0;
}

