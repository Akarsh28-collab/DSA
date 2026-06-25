#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[1000];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    int prefix = 0;
    bool found = false;

    for(int i = 0; i < n - 1; i++){
        prefix += arr[i];
        int suffix = sum - prefix;

        if(prefix == suffix){
            cout << "yes" << endl;
            found = true;
            break;
        }
    }

    if(!found){
        cout << "no" << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
// }
// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i;j++){
//         for(int k=j;k<=j+i;k++){
//             cout<<arr[k];
//         }
//         cout<<" ";
      
//     }
//      cout<<endl;
// }
// }