#include<iostream>
using namespace std;
int columnCal(int c){
int c1 = 0;
        if(c<3){
            for(int i=c;  i<3; i++)
            {
                c1++;
            }
        }
        //
        else
        {
            for(int i=3; i<c; i++)
            {
                c1++;
            }
        }
        return c1;
    }


    /////////////////
    int rowCal(int r)
    {
        int r1 = 0;
        if(r<3)
        {
            for(int i=r;  i<3; i++)
            {
                r1++;
            }
        }
      
        else{
            for(int i=3;  i<r; i++)
            {
                r1++;
            }
        }
        return r1;
    }
int myFunction(int r, int c ){
int c1=0, r1=0,t;
   return rowCal(r)+columnCal(c);
}
int main(){
    int r,c,k,cnt=0;
    int a[5][5];

    for(r=0; r<5; r++){
        for(c=0; c<5; c++)
        {
            cin>>a[r][c];
        }
    }

    //check
    for(r=0; r<5; r++){
        for(c=0; c<5; c++){
            if(a[r][c]==1){
            cout<< myFunction(r+1, c+1);
            }
        }
    }
    return 0;
}
