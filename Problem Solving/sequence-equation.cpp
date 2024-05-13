#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=1;
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=s;
        s++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(b[j]==a[i]){
                int k=i;
                for(int j=0;j<n;j++){
                    if(a[j]==k){
                        cout<<j+1<<endl;
                    }   
                }
            }
        }
    }
    return 0;
}