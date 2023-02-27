#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"enter 3 no=";
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);
    if(d=0)
    {
    cout<<"real and equal";
    }
    else
    {
        if(d>=0)
        cout<<"real and unequal";
        else
        cout<<"imaginary";
    }
    return 0;
    
}