#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;

    int st=0;
    int end=n-1;
    int ans=n;
    int mid;
    while(st<=end){
        mid=end+(st-end)/2;

        if(arr[mid]==key){
            ans=mid;
            break;
        }
        else if(arr[mid]>key){
            ans=mid;
            end=mid-1;
            

        }
        else{
            st=mid+1;
        }
    }
    cout<<ans<<endl;
}