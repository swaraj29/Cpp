#include <iostream>

#include<math.h>

using namespace std;

int main()
{
    float x1,x2,y1,y2,Distance;
    cout<<"enter x1,x2,y1,y2="<<endl;
    
    cin>>x1>>x2>>y1>>y2;
    Distance=sqrt(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    
    cout<<"distance is="<<Distance;
    return 0;
    
}