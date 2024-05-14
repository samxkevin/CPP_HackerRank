#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int k=t;
    int a[k];
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int cnt=0;
        for(int i=0,j=1;j<n;j++){
            if(s[i]==s[j]){
                cnt++;
            }
            else{
                i++;
            }
        }
        cout<<cnt<<endl;
    }
    for(int i=0;i<k;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}