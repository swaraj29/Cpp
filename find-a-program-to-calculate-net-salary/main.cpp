#include<iostream>
using namespace std;
int main()
{  
    float basic;
    float percentallow;
    float percentdeduct;
    float netsalary;
    
    cout<<"enter basic salary=";
    cin>>basic;
    
    cout<<"enter percent allow=";
    cin>>percentallow;
    
    cout<<"enter percent deduct=";
    cin>>percentdeduct;
    
    netsalary=basic+basic*percentallow/100-basic*percentdeduct/100;
    cout<<"net salary is"<<netsalary;
    
    return 0;
    
}