#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
const ll N = 1e4 + 5;
int solve()
{
    ll a,b;
    cin>>a>>b;
    string s[9]={"one","two","three","four","five","six","seven","eight","nine"};
    for(ll i=a;i<=b;i++)
    {
        if(i<=9)
            cout<<s[i-1]<<endl;
        else
        {
            if(i%2==0)
                cout<<"even"<<endl;
            else
                cout<<"odd"<<endl;
        }
    }
    return 0;    
}
int main() {
    IOS;
    
    solve();
    
}
