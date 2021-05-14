#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
const ll N = 1e4 + 5;
int solve()
{
    ll n;
    vector<ll> v;
    for(int i=0;i<4;i++)
    {
        cin>>n;
        v.emplace_back(n);
    }
    sort(v.begin(), v.end(), greater<ll>());
    cout<<v[0]<<endl;
    return 0;    
}
int main() {
    IOS;
    
    solve();
    
}
