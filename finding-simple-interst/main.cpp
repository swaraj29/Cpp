#include <iostream>
using namespace std;
int main()
{
    float p,r,t,SI;
    cout<<"calculate the simple interest"<<endl;
    cout<<"enter principal =";
    cin>>p;
    cout<<"enter rate =";
    cin>>r;
    cout<<"enter time =";
    cin>>t;
   
    cout<<"simple interest ="<<(p*r*t)/100;
    return 0;
    
}