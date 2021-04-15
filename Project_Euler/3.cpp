/*

*/
#include <bits/stdc++.h>
using namespace std;


#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll  long long

const ll N = 600851475143;

int solve()
{
        ll n=600851475143,max=1;
        while(n%2==0)
        {
                n/=2;
                max=2;
        }
        for (int i = 3; i < sqrt(n); i+=2)
        {
                while(n%i==0)
                {
                        max=i;
                        n/=i;
                }
                /* code */
        }
        if(n>2)
                max=n;
        cout<<max<<endl;


    return 0;    
}

int main() {
    IOS;

    
    solve();
    

}