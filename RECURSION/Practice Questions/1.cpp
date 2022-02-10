// LEETCODE LETTER COMBINATIONS 
#include <iostream>
using namespace std;
int main(){
    string n; cin>>n;
    int end1, end2;
    for(int k=0;k<n.length()-1; k++){
        if(n[k]=='7'|| n[k]=='9'){
            end1=4;
        }else{
            end1=3;
        }
        if(n[k+1]=='7' || n[k+1]=='9'){
            end2=4;
        }else{
            end2=3;
        }
        for(int i=0;i<end1;i++){
            for(int j=0;j<end2;j++){
                if(n[k]=='8'){
                    cout<<char(n[k]+i+47+(n[k]-50)*2+1);
                    cout<<char(n[k+1]+j+47+(n[k+1]-50)*2+1)<<endl;
                }
                else if(n[k+1]=='8' || n[k+1]=='9'){
                    cout<<char(n[k]+i+47+(n[k]-50)*2);
                    cout<<char(n[k+1]+j+47+(n[k+1]-50)*2+1)<<endl;
                }else{
                    cout<<char(n[k]+i+47+(n[k]-50)*2);
                    cout<<char(n[k+1]+j+47+(n[k+1]-50)*2)<<endl;
                }
            }
        }
    }
}
