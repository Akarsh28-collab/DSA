#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int h[1000];
    for(int i=0;i<n;i++){
        cin>>h[i];
    }

    vector<int>leftmax(n);
    vector<int>rightmax(n);
    int ans=0;
    if(n==0){
       cout<<"0"<<endl;
    }

    leftmax[0]=h[0];
    rightmax[n-1]=h[n-1];

    for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],h[i]);
    }
    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],h[i]);
    }
    for(int i=0;i<n;i++){
        ans+=min(leftmax[i],rightmax[i])-h[i];
    }
    cout<<ans<<endl;
}

