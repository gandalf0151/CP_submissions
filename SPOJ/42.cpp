/*

*/
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const int N = 1e4 + 5;

int rev(int n)
{
    int nx=n,i;
    vector<int> v;
    while(nx)
    {
        v.emplace_back(nx%10);
        nx/=10;
    }
    nx=0;
    i=0;
    for (auto it = v.end()-1;it>=v.begin();it--)
    {
        nx+=(*it)*pow(10,i);
        i++;
        /* code */
    }
    return  nx;
}

int solve()
{
    int n,m,sum;
    cin>>n>>m;
    n=rev(n);
    
    m=rev(m);
    
    sum=n+m;
    
    sum=rev(sum);
    cout<<sum<<endl;




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