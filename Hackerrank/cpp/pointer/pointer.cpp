#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long

const ll N=1e4+5;

void update(ll *a, ll *b)
{
    ll c,d;
    c=(*a)+(*b);
    d=abs((*a)-(*b));
    *a=c;
    *b=d;
}

int solve()
{
    ll a,b;
    cin>>a>>b;
    ll *pa=&a, *pb=&b;

    update(pa,pb);
    cout<<a<<endl<<b<<endl;




    return 0;    
}

int main() {
    IOS;

        solve();
    
}
