#include <bits/stdc++.h>
using namespace std;
int main(){


    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int st=0;
    int end=n-1;
    while(st<end){
        if(arr[st]==0){
            st++;
        }
        else{
            if(arr[end]==0){
                swap(arr[st],arr[end]);
                st++;
                end--;

            }
            else{
                end--;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}