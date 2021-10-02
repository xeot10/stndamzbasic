#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <vector>
#include <cmath>
#define int long long int 
#define mod 1000000007
// #define mod 998244353
#define append push_back
#define pop pop_back
#define sec second
using namespace std;
int q,x,y,z,x0,x1,k,n,m;
const int N=1e5;

void solve(){
    cin>>n>>x;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    vector<int> arr(x+1,0);
    for(int j=0;j<n;j++){
        for(int i=x;i>0;i--){
            if(i-a[j]>0)
                arr[i]=max(arr[i],arr[i-a[j]]+b[j]);
            if(i==a[j])
                arr[i]=max(arr[i],b[j]);
        }
    }
    cout<<arr[x]<<endl;

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t=1;
    // cin>>t;
    while(t--)
        solve();
}
