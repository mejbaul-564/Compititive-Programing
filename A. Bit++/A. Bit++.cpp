#include<iostream>
#include<string>
using namespace std;
int myFunction(string txt)
{
    string txt2="X++";
    if(txt!= "X++" && txt!="++X")
    {
        return -1;
    }
    else
    {
        return +1;
    }
}
int main()
{
    int i,n,total=0;
    string txt;
    cin>>n;
    //for
    for(i=1; i<=n; i++)
    {
        cin>>txt;
        total+= myFunction(txt);
    }
    cout << total;
    return 0;
}
