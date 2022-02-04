//Display a string that has removed all the a's from the given string
#include <iostream>
#include <string>
using namespace std;

string removeA(string a){
    static int i=0;
    static string ans;
    if(i==(a.length())){
        return ans;
    }
    if(a[i]!='a'){
        ans.push_back(a[i]);
    }
    i++;
    return removeA(a);
}
int main(){
    string a;
    getline(cin,a);
    string ans;
    ans=removeA(a);
    for(int i=0; i<ans.length();i++){
        cout<<ans[i];
    }
    return 0;
}