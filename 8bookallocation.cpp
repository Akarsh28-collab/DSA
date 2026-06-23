#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int st=0;
    int end=0;

    for(int i=0;i<n;i++){
        st=max(st,arr[i]);
        end+=arr[i];
    }
    if(m>n){
        return 0;
    }
    int mid;
    
    int ans;
    while(st<=end){
        mid=st +(end-st)/2;
        int pages=0;
        int count=1;
        for(int i=0;i<n;i++){
            pages+=arr[i];
            if(pages>mid){
                count++;
                pages=arr[i];
            }
        }
        if(count<=m){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    cout<<ans<<endl;
}

