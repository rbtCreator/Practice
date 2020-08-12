/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

#include <vector>

using namespace std;

int main() {

    int n,k,l,r;

    cin >> n >> k;

    vector <char> a(n,'I');

    for (int i = 0; i < k; i++) {
        cin >> l >> r;
        for (int j = l-1; j < r; j++) {
            a[j] = '.';
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i];
    }

return 0;

}
