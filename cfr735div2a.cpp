#include <bits/stdc++.h>
 
using namespace std;
 
#define pi acos(-1.0)
#define ll long long int
#define sc scanf
#define pf printf
#define fin for(ll i=0; i<n; i++)
#define fjm for(ll j=0; j<m; j++)
#define fr(i,a,n) for(ll i=a; i<n; i++)
#define rf(i,n,a) for(ll i=n-1; i>=a; i--)
#define nl "\n"
#define readfirst() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
 
ll gcd(ll p, ll q) {
    return q==0?p:gcd(q,p%q);
}
 
int main() {
    readfirst();
    ll t, n, k;
    cin >> t;
    while(t--) {
        cin >> n;
        ll a[n+2];
        fin cin >> a[i];
        k=0;
        fr(i,0,n-1) k=max(k,a[i]*a[i+1]);
        cout << k << nl;
    }
    return 0;
}
