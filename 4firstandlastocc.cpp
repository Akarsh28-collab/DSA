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
    int st=0;int end=n-1;
    int mid;
    int first=-1;
    int last=-1;
    while(st<=end){
        mid=st+(end-st)/2;
        if(arr[mid]==key){
            first=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            st=mid+1;
        }
        else{
            end=mid-1;
        }

    }
    st=0; end=n-1;
    while(st<=end){
        mid=st+(end-st)/2;
        if(arr[mid]==key){
            last=mid;
            st=mid+1;
        }
        else if(arr[mid]<key){
            st=mid+1;
        }
        else{
            end=mid-1;
        }

    }
    cout<<first<<" "<<last<<endl;

}



