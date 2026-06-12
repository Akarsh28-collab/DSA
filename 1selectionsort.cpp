// #include <iostream>
// using namespace std;
// int main(){
//     int arr[1000];
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n-1;i++){
//         int index=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[index]){
//                 index=j;
//             }
//         }
//         swap(arr[index],arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1000];

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    for(int i=n-1;i>0;i--){
        int index=i;
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[index]){
                index=j;
            }
        }
        swap(arr[index],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
}