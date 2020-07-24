/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: gandalf11
TASK: gift1
LANG: C++14                
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array    

ll solve()
{
    int np,pos=-1,pos1=-1,ts;
    cin>>np;
    string s[np];
    int mon[np];
    memset(mon,0,sizeof(mon));
    for (int i = 0; i < np; ++i)
    {
        cin>>s[i];
        /* code */
    }
    ts=np;
    while(ts--)
    {
        //cout<<"start"<<ts<<endl;
        string st;
        int amt, no;
        cin>>st>>amt>>no;
        if(no!=0)
        {
        for (int i = 0; i < np; ++i)
        {
            if((st.compare(s[i]))==0){
                pos=i;
                //cout<<"compared"<<s[i]<<endl;
                break;
            }
            /* code */
        }
        //if(pos==-1) cout<<"-1"<<endl;
        //else cout<<"pos="<<pos<<endl;
        mon[pos]+=(amt%no)-amt;
        //cout<<"mon["<<pos<<"]="<<mon[pos]<<endl;
        
        if(amt/no!=0){
            //cout<<"goto start"<<endl;
         ll x=no;
        while(x--)
        {
            string s1;
            cin>>s1;
            //cout<<s1<<endl;
            for (int i = 0; i < np; ++i)
            {
                if((s1.compare(s[i]))==0)
                    pos1=i;
                /* code */
            }
            //cout<<"pos="<<pos1<<endl;
            //if(pos1==-1) cout<<"-1"<<endl;
            //else cout<<"pos1="<<pos1<<endl;
            mon[pos1]+=amt/no;
        }
        }
        else
        {
            while(no--)
            {
                string s2;
                cin>>s2;
                //cout<<s2<<endl;
            }
        }
        }
        pos=-1;
        pos1=-1;
        //cout<<"done"<<endl;        
    } 
    for (int i = 0; i < np; ++i)
    {
        cout<<s[i]<<" "<<mon[i]<<endl;
        /* code */
    }
    
 
    return 0;    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("gift1.in", "r", stdin);
    //freopen("gift1.out", "w", stdout);
      
    solve();
}