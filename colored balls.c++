#include<bits/stdc++.h>
using namespace std;
int t,n;

cin>>t;
wwhile(t--){
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_elem = max(arr, arr+n);
    for (int i=0;i<n;i++){
        if (i == max_elem) break;
    }
    cout << i << "\n";
}