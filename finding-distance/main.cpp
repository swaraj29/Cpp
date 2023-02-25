#include <iostream>
using namespace std;
int main()
{
    int u,v,a;
    float distance;
    
    cout<<"enter u"<<endl;
    cin>>u;
    
    cout<<"enter v"<<endl;
    cin>>v;
    
    cout<<"enter a"<<endl;
    cin>> a;
    
    distance=(v*v-u*u)/(2*a);
    cout<<"distance is"<<distance;
    
    return 0;
    
}
