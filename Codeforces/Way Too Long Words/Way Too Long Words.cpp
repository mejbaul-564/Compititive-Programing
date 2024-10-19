#include<iostream>
#include<string>
using namespace std;
int main()
{
    string txt;
    int n;
    cout<<"How many time input string : ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Please input word : ";
        cin>>txt;
        int len=txt.size();
        if(len>10)
        {
            cout<<txt[0]<<len-2<<txt[len-1]<<"\n";
        }
        else
        {
            cout<<txt<<"\n";
        }
    }
    return 0;
}
