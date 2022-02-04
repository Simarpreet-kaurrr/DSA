// Display a string that has removed all the a's from the given string //2nd method using string methods available
#include <iostream>
#include <string>
using namespace std;

string removeA2(string A){
    static string ans;
    if(A.empty()){
        return ans;
    }
    if(A[0]!='a'){
        ans.push_back(A.at(0));
    }
    return removeA2(A.substr(1)); //means 1 to end
}
int main(){
    string a;
    getline(cin,a);
    string ans;
    ans=removeA2(a);
    for(int i=0; i<ans.length();i++){
        cout<<ans[i];
    }
    return 0;
}