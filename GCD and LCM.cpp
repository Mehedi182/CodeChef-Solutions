#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,num1, num2, gcd, lcm, remainder, numerator, denominator;

      cin>>t;  while(t--)
        {


    cin>>num1>>num2;
    if (num1 > num2)
    {
        numerator = num1;
        denominator = num2;
    }
    else
    {
        numerator = num2;
        denominator = num1;
    }
    remainder = numerator % denominator;
    while (remainder != 0)
    {
        numerator   = denominator;
        denominator = remainder;
        remainder   = numerator % denominator;
    }
    gcd = denominator;
    lcm = num1 * num2 / gcd;
   cout<<gcd<<" "<<lcm<<endl;
}
}
