#include<iostream>
using namespace std;
int main()
{
    int n,k,i,next=0,tar;
    cout<<"Input n and k : ";
    cin>>n;
    cin>>k;
    int a[n];
    if(n>=k)
    {
        for (i=1; i<=n; i++)
        {
            cin>>a[i];
            if(k==i)
            {
                tar=a[i];
            }
        }
        //
        for(i=1; i<=n; i++)
    {
        if(a[i]>=tar && a[i]!=0)
        {
            ++next;
        }
    }
    cout<<next;
    }
    else
    {
        cout<<"Again n and k input : ";
        cin>>n;
        cin>>k;
    }
    return 0;
}
