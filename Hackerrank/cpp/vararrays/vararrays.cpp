#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long

const ll N=1e4+5;

int solve()
{
    ll n,q;
    cin>>n>>q;
    vector<vector<ll>> v;
    vector<ll> v1;
    for(int i=0; i<n; i++)
    {
        ll k;
        cin>>k;
        while(k--)
        {
            ll x;
            cin>>x;
            v1.emplace_back(x);
        }
        v.emplace_back(v1);
        v1.clear();
    }
    while(q--)
    {
        ll i,j;
        cin>>i>>j;
        cout<<v[i][j]<<endl;
    }
    



    return 0;    
}

int main() {
    IOS;

    
        solve();
    
    }

