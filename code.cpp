#include<bits/stdc++.h>
using namespace std;

int main()
{
    float t=0.0,x=1,tau=1,alpha=1,ts1=0,ts2=0;
    
    while(t<=5)
    {
        t+=0.1;
        if(x>=1&&(t-ts1>0.1))
        {
            x-=x*exp(-t/tau);
            ts2=t;
        }
        if(x<1&&(t-ts2>0.1))
        {
            x=alpha*t;
            ts1=t;
        }
        cout<<x<<endl;
    }
}