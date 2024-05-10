#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n];
    for(int i=0,j=1;i<n,j<=n;i++,j++){
        if(j==a[i]){
            for(int k=0;k<n;k++){
                if(a[k]==i+1){
                    for(int l=0;l<n;l++){
                        b[l]=k+1;
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<endl;
    }
    return 0;
}