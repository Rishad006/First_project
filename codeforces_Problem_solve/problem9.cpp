#include<bits/stdc++.h>
using namespace std;
int min()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        vector<int>v;
        cin>>s;
        for(int i=0; i<4; i++)
        {
            if(s[i]=='#')
            {
                v.push_back(i+1);
            }
        }
        reverse(v.begin(), v.end());
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i];
            if(i<v.size())
            {
               cout<<" ";
            }
        }
        cout<<endl;
    }
}
