// Returning Array list without passing the array list as argument for linear searching multiple occurences
#include <iostream>
#include <vector>
using namespace std;

static int i=0;
vector<int> getMultipleIndex( int arr[], int target){
    vector<int> *arraylist = new vector<int>;
    if(i>5){
        return *arraylist;
    }
    if(target==arr[i]){
        arraylist->push_back(i);
    }
    i=i+1;
    vector<int> resultantarraylist= getMultipleIndex(arr,target);
    for(int i=0; i<resultantarraylist.size();i++){
        arraylist->push_back(resultantarraylist[i]);
    }
    return *arraylist;
}
int main(){
    int arr[6]={1,2,3,2,1,1};
    int t;
    cin>>t;
    vector<int> result=getMultipleIndex(arr,t);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    return 0;
}