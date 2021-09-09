/*
* Date   : 9.9.2021
* author : Vishal Sharma
*/  
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define ll              long long int
#define ld              long double
#define REP(i,a,b)      for(ll i=a; i<b; i++)
#define REPI(i,a,b)     for(ll i=b; i>=a; i--)
#define pi              3.141592653589793238
#define mod             1000000007


void c_p_c(){

ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
}

int main(){

c_p_c();

    // ll t;
    // cin>>t;
    // while(t--){
ll n;
cin>>n;
ll arr[n];
ll ans = 0;
for(int i=0; i<n; i++){
	cin>>arr[i];
}

for(int i=0; i<n-1; i++){
	ans+=arr[i];
}

cout<<((n*(n+1)/2)-ans);


//}

return 0;

}
