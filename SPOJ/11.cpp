/*

*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const int N = 1e4 + 5;

int solve()
{
    int n,cnt1=0;
    cin>>n;
    for (int i = 5; n/i >= 1;i*=5)
    {
        cnt1+=n/i;
        /* code */
    }
    cout<<cnt1<<endl;



    return 0;    
}

int32_t main() {
    IOS;

    int t;
    cin >> t;
    while(t--) {
    
        solve();
    
    }
}