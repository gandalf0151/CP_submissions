/*
https://codeforces.com/contest/677/problem/A
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

ll solve()
{
    ll n,h,i,w=0;
    cin>>n>>h;
    ll a[n];
    for (i = 0; i < n; ++i)
    {
        cin>>a[i];
        if(a[i]>h)
            w+=2;
        else
            w++;
        /* code */
    }
    cout<<w<<endl;




    return 0;    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    
    solve();
    

}