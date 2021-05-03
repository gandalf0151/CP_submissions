#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long

const ll N=1e4+5;

int solve()
{
    ll n;
    char tmp='c';
    ll pair=0,cnt=0;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if(s[1]==tmp||tmp=='c')
        cnt++;
        else{
            cnt=0;
            pair++;
        }
        tmp=s[1];
        
    }
    cout<<pair+1<<endl;
    return 0;
}

int main ()
{
    IOS;
    solve();
}
