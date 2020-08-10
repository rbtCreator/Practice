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
    double Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, x, y;
    
    cout<<"enter Ax:";
    cin>> Ax;
    cout<<"enter Ay:";
    cin>> Ay;
    
    cout<<"enter Bx:";
    cin>> Bx;
    cout<<"enter By:";
    cin>> By;
    
    cout<<"enter Cx:";
    cin>> Cx;
    cout<<"enter Cy:";
    cin>> Cy;
    
    cout<<"enter Dx:";
    cin>> Dx;
    cout<<"enter Dy:";
    cin>> Dy;
    
    cout<<"enter x:";
    cin>> x;
    cout<<"enter y:";
    cin>> y;
    
    double P0 = (x-Ax)*(By-Ay) - (y-Ay)*(Bx-Ax);
    double P1 = (x-Bx)*(Cy-By) - (y-By)*(Cx-Bx);
    double P2 = (x-Cx)*(Dy-Cy) - (y-Cy)*(Dx-Cx);
    double P3 = (x-Dx)*(Ay-Dy) - (y-Dy)*(Ax-Dx);
    
    bool flag;
    
    if((P0 >=0 && P1 >=0 && P2 >=0 && P3 >=0) || (P0 <=0 && P1 <=0 && P2 <=0 && P3 <=0)) flag = true;
    else flag = false;
    
    if(flag) cout<<"inside";
    else cout<<"outside";
    
    return 0;
}
