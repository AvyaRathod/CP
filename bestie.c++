#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
        result = gcd(arr[i], result);
  
    return result;
}

int main(){
int t,n;
cin>>t;
while(t--){
    int cost=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int g = findGCD(arr,n);
    if(g == 1){
        cout<<0<<endl;
    }
    else if(gcd(g,n) == 1){
        cout<<1<<endl;
    }
    else if(gcd(g,n-1) == 1){
        cout<<2<<endl;
    }
    else{
        cout<<3<<endl;
    }
    
}
}
