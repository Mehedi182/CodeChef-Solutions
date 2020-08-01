#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0;
        string s;
        cin>>s;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
            s[i]=0;
            c++;
            }
            else break;
            }
if(c==0)
{
    reverse(s.begin(),s.end());
    cout<<s<<endl;
}
else
{
    for(int i=s.size()-1-c;i>=0;i--)
        {
            cout<<s[i];
}
cout<<endl;           // cout<<s<<endl;
    }
}
}

