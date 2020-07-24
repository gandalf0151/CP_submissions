/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: gandalf11
TASK: ride
LANG: C++14                
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array    

ll solve()
{
    ll p1=1,p2=1,i=0,n;
    string s1,s2;
    cin>>s1>>s2;
    n=s1.length();
    while(n--)
    {
        p1=((p1%47)*((s1[i]-64)%47)%47);
        i++;
    }
    i=0;
    n=s2.length();
    while(n--)
    {
        p2=((p2%47)*((s2[i]-64)%47)%47);
        i++;
    }
    if(p1%47==p2%47)
        cout<<"GO"<<endl;
    else
        cout<<"STAY"<<endl;

    
    
 
    return 0;    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);
      
    solve();
}