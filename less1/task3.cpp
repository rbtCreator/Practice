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
    int a, b;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    
    while(a > 0 && b > 0)
    {
        if(a > b) a %= b;
        else b %= a;
    }
 
    cout<<a + b;
    
    return 0;
}
