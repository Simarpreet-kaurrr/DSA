// Linear Search for multiple occurences using recursion 
#include <iostream>
#include <vector>

using namespace std; 
vector<int> getMultipleIndex(int n[], int t, int i, vector<int>result){ 
    if(i>4){
        return result;
    }
    if(n[i]==t){
        result.push_back(i);
    }
    return getMultipleIndex(n,t,i+1,result);
}

int main(){
    int n[5]={2,3,2,1,0};

    vector<int> result; 
    int target;
    cin>>target;

    vector<int> resultant=getMultipleIndex(n,target,0, result);
    for(int i=0; i<resultant.size(); i++){
        cout<<resultant[i]<<" ";
    }
    return 0;
}