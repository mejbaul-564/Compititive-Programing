#include<iostream>
using namespace std;
int main()
{
    int size, np, x;
    cout<<"Enter Array Size: \n";
    cin>>size;
    int arr[size+1];
    cout<<"Enter Array Elements: \n";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Input Position of Insert (0th based index)\n";
    cin>>np;
    if(np>size)
    {
        cout<<"It is 0th based index & Maximum size of this array is: "<<size+1<<" . So, you can insert no element at position "<<np;
    }
    else
    {
        cout<<"Input new element\n";
        cin>>x;

        for (int i = size; i > np; --i)
        {
            arr[i] = arr[i - 1];
        }
        arr[np] = x;
        cout<<"Array : ";
        for(int i=0; i<size+1; i++)
        {
            cout<<arr[i]<<" ";
        }
    }

}

