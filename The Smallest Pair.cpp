#include<bits/stdc++.h>
using namespace std;
int main()
{
     long int n,t,i,a[100001];
    cin>>t;
    while(t--)
    {

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<a[0]+a[1]<<endl;
}
return 0;
}
