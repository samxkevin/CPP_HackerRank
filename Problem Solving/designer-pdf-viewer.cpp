#include<bits/stdc++.h>
using namespace std;
int main(){
    int h[26];
    for(int i=0;i<26;i++){
        cin>>h[i];
    }
    string s;
    cin>>s;
    int n=s.size();
    int max=0;
    for (int i=0; i<n; i++){
        if(h[s[i]-'a']>max){
            max=h[s[i]-'a'];
        }
    }
    cout<<max*n<<endl;
    return 0;
}