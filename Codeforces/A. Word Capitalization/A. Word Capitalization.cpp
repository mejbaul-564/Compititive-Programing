#include<iostream>
#include<string>
using namespace std;
int main()
{
    //string input
    string s;
    cin>>s;
    //first string identify and topper
    for(int i=0; i<s.size(); i++)
    {
        if(i==0)
        {
            s[i]=toupper(s[i]);
        }
    }
    //out
    for(int i=0; i<s.size(); i++)
    {
        cout<<s[i];
    }
    return 0;
}
