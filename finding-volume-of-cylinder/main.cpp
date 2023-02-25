#include <iostream>
using namespace std;
int main()
{
    float radius,height;
    float volume;
    
    cout<<"enter radius and height"<<endl;
    cin>>radius>>height;
    
    volume=3.1425*radius*radius*height;
    cout<<"volume of cylinder"<<volume;
    
    return 0;
    
}