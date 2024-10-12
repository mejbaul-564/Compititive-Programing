#include<iostream>
using namespace std;
int main()
{
    int w;
    cout<<"Please input watermelon weight : ";
    cin>>w;
    if(w!=2 && w%2==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
