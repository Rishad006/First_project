#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int a=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='.' && s[i-1]=='.' && s[i+1]=='.')
            {
                a=2;
                break;
            }
            else if(s[i]=='.')
            {
                a++;
            }
        }
        cout<<a<<endl;
        a=0;
    }
}
