#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long  int a,b,c,s,f,ma,mi,ans;
       cin>>a>>b>>c;
       if(a%c==0)
       {
           s=a/c;
       }
       else
       {
           s=(a/c) + 1;
       }
       if(b%c==0)
       {
           f=b/c;
       }
       else
       {
           f = (b/c) + 1;
       }
       ma=max(s,f);
       mi=min(s,f);
       ans = ma + mi + (ma-mi);
       if(s>f)
       {
           ans--;
       }
       cout<<ans<<endl;
    }

}
