#include <bits/stdc++.h>
using namespace std;
int main(){
    int  arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int st=0;
    int end=n-1;
    int mid;
   
    while(st<end){
        mid=st+(end-st)/2;
        
         if(arr[mid+1]>arr[mid]){
            st=mid+1;
        }
        else{
            end=mid;
        }
    }
    cout<<st<<endl;
}