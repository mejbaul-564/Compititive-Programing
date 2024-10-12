#include<iostream>
using namespace std;
int main()
{
    int i,j,arr[1000][4],co1=0,co2=0,n;
    cout<<"Please input n number of problem : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
                   {
                co1++;
            }
        }
        if(co1>=2){
            co2++;
        }
        co1=0;
    }
    //
    cout<<co2;

    return 0;
}
