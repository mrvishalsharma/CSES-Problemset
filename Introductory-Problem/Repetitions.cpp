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


    string str;
    cin >> str;
    int n = str.length();
    int ans = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        if (str[r] == str[l])
        {
            r++;
            ans = max(ans, r - l);
        }
        else
        {
            l++;
        }
    }
    ans = max(ans, r - l);
    cout << ans << endl;
 

return 0;

}
