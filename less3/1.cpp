/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
//#include <math>

using namespace std;

int main()
{
    int X[8], Y[8];
    for(int i = 0; i < 8; i++) cin>>X[i]>>Y[i];
    
    bool flag;
    
    for(int i = 0; i < 8; i++)
        for(int j = i + 1; j < 8; j++)
            if(X[i] == X[j] || Y[i] == Y[j] || abs(X[i] - X[j]) == abs(Y[i] - Y[j]))
                flag = false;
    
    if(flag)
        cout<<"NO";
    else
        cout<<"YES";

    return 0;
}
