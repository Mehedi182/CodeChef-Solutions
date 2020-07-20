#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c,i;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                c++;
            }
        }
        if(c==0) cout<<"yes"<<endl;
        else cout<<"no"<<endl;

    }
}
