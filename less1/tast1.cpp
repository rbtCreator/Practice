/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    double y1,y2,y3,x1,x2,x3;
    cout<<"enter x1:";
    cin>>x1;
    cout<<"enter y1:";
    cin>>y1;
    
    cout<<"enter x2:";
    cin>>x2;
    cout<<"enter y2:";
    cin>>y2;
    
    cout<<"enter x3:";
    cin>>x3;
    cout<<"enter y3:";
    cin>>y3;
    
    double a = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
    double b = sqrt(pow(x2-x3, 2) + pow(y2-y3, 2));
    double c = sqrt(pow(x3-x1, 2) + pow(y3-y1, 2));
    
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    
    bool flag(true);
    
    if(a*b*c == 0) flag = false;
    
    if(flag)
    {
        if(a+b <= c) flag = false;
        if(b+c <= a) flag = false;
        if(a+c <= b) flag = false;
    }
    
    if(flag) cout<<"triangle exisist"<<endl;
    else cout<<"triangle does not exisist"<<endl;
    
    return 0;
}
