#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    //string input
    string demo,num_demo;
    cin>> demo;
    //number identify
    for(int i=0; i<demo.size(); i++)
    {
        if(demo[i] != '+')
        {
            num_demo+=demo[i];
        }
    }
    //sort
    int len=num_demo.size();
    sort(num_demo.begin(),num_demo.end());
    //out
    cout<<num_demo[0];
    for(int i=1; i<num_demo.size(); i++)
    {
        cout<<'+'<<num_demo[i];
    }
    return 0;
}
