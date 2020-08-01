#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,n,a,b,c,d,e;
    cin>>t;
    while(t--)
    {
       cin>>n;
      a=n/100; n=n%100;
       b=n/50; n=n%50;
      c=n/10; n=n%10;
        d=n/5; n=n%5;
        e=n/2; n=n%2;
       a=a+b+c+d+e+n;
       cout<<a<<endl;


    }
}
