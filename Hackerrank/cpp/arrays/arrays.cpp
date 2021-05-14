#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long

const ll N=1e4+5;

int solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    for(int i=n-1;i>0;i--)
        cout<<a[i]<<" ";
    cout<<a[0]<<endl;




    return 0;    
}

int main() {
    IOS;

    
        solve();
    
    
}
