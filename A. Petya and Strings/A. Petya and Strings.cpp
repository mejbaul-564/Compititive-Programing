#include<iostream>
#include<string.h>
using namespace std;
void capital(char t[100])
{
    for(int i=0; t[i]!='\0'; i++)
    {
        if(t[i]>=97)
        {
            t[i]=t[i]-32;
        }
    }
}

int main()
{
    char first_string[100],se_string[100];
    gets(first_string);
    gets(se_string);
    capital(first_string);
    capital(se_string);
    int i=strcmp(first_string,se_string);
    cout<<i;
    return 0;
}
