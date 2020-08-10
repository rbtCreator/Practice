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
    
    
    double area = std::abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2;
    cout<<area;
    
    return 0;
}
