// #### 12. Palindromic Number Pyramid

// **Input:** 5
// **Output:**

// ```
//     1
//    121
//   12321
//  1234321
// 123454321
// ```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=5;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i-1; j++)
            cout << " ";
        for (int j=1; j<=i+1; j++)
            cout << j;
        for (int j=i; j>=1; j--)
            cout << j;

        cout << endl;
    }
}
