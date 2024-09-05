#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     int l, m;
     cin>>l>>m;
     string s1, s2;
     cin>>s1>>s2;
     int c=0;
     while(m--)
     {
        int a, b;
         cin>>a>>b;
         a=a-1;
         b=b-1;
         string subA = s1.substr(a, b - a + 1);
            string subB = s2.substr(a, b - l + 1);
         sort(subA.begin(), subA.end());
            sort(subB.begin(), subB.end());
         cout<<subA<<" "<<subB<<endl;
         if (subA == subB) {
                cout << 0 << '\n';
            } else {

                int changes = 0;
                for (int i = 0; i < subA.size(); ++i) {
                    if (subA[i] != subB[i]) {
                        changes++;
                    }
                }
                cout << changes / 2 << '\n';

}
}
}
     }


