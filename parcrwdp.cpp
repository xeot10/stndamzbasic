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
// #define mod 1000000007
// #define mod 998244353
#define append push_back
#define pop pop_back
#define sec second
using namespace std;
int q,x,y,z,x0,x1,k,n,m;
const int N=2e5;



void solve(){
    cin>>n;
    vector<int> arr(n,0);
    map<int,int> d;
    array<int,2> a[n];
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
        a[i][1]+=a[i][0];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        d[a[i][0]]++;
        d[a[i][1]]--;
    }
    int c=0,pre=0;
    for(auto p:d){
        if(c>0 && c<=n){
            arr[c-1]+=p.first-pre;
        }
        // cout<<p.first<<endl;
        pre=p.first;
        c+=p.sec;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
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
