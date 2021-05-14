#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
const ll N = 1e4 + 5;
int solve()
{
    ll n;
    cin>>n;
    string s[10]={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
    if(n>9)
        cout<<s[0]<<endl;
    else
        cout<<s[n]<<endl;
    //if(n>9)
        //cout<<"Greater than 9"<<endl;
    //else
    //{
        //switch(n){
        //case 1:
            //cout<<"one"<<endl;
            //break;
        //case 2:
            //cout<<"two"<<endl;
            //break;
        //case 3:
            //cout<<"three"<<endl;
            //break;
        //case 4:
            //cout<<"four"<<endl;
            //break;
        //case 5:
            //cout<<"five"<<endl;
            //break;
        //case 6:
            //cout<<"six"<<endl;
            //break;
        //case 7:
            //cout<<"seven"<<endl;
            //break;
        //case 8:
            //cout<<"eight"<<endl;
            //break;
        //case 9:
            //cout<<"nine"<<endl;
            //break;
        //default:
            //return 0;
    //}
    //}
    return 0;    
}
int main() {
    IOS;
    
    solve();
    
}
