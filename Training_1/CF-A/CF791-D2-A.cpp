/*

*/
#include <bits/stdc++.h>
using namespace std;


#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long

const ll N = 1e4 + 5;

int solve()
{
    ll a,b,cnt=0;
    cin>>a>>b;
    while(a<=b)
    {
    	a*=3;
    	b*=2;
    	cnt++;
    }
    std::cout<<cnt<<endl;



    return 0;    
}

int main() {
    IOS;

    
    solve();
    

}