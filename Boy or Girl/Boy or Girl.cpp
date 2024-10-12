#include<bits/stdc++.h>
#include<string>
#include<set>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    set<char>myset;
    for(int i=0;i<s1.size();i++){
        myset.insert(s1[i]);
    }

    if(myset.size()%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    return 0;
}
