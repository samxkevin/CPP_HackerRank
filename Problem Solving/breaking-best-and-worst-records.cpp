#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int scores[n];
    for(int i=0;i<n;i++){
        cin>>scores[i];
    }
    int max,min;
    int count1=0;//no. of times best was broken
    int count2=0;//no. of times worst was broken
    for(int i=0,j=1;i<n&&j<n;i++,j++){
        max=min=scores[i];
        if(scores[j]>max){
            count1++;
            max=scores[j];
            cout<<max<<" ";
        }
        else{
            count2++;
            cout<<scores[j]<<" ";
        }
    }
    cout<<endl;
    cout<<count1<<" "<<count2;
    return 0;
}