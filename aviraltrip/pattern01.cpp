// #### 1. Right-Angled Triangle of Stars
// Input: 5
// Output:
// *
// **
// ***
// ****
// *****
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n=5;
    for (int i=0;i<n;i++) {
        for (int j=0;j<=i;j++) {
            cout << "*";
        }
        cout << endl;
    }
}