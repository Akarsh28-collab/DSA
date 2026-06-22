#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int st=0;
    int end=n;
    int ans=n;
    int mid;
    while(st<=end){
        mid=end+(st-end)/2;
        if(mid*mid==n){
            ans=mid;
            break;
        }
        else if(mid*mid>n){
            end=mid-1;
        }
        else{
            ans=mid;
            st=mid+1;
        }
    }
    cout<<ans<<endl;
}