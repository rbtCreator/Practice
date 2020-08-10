/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<cmath>
#include<string>

using namespace std;
int main()
{
    int num;
    
    cout<<"enter number:";
    cin>> num;
    
    string ans;
    
    string C[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string X[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string I[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    
    ans = C[(num%1000)/100]+X[(num%100)/10]+I[(num%10)];
    
    cout<<ans;
    
    return 0;
}
