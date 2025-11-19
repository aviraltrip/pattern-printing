// #### 13. Zig-Zag Star Pattern

// **Input:** 3
// **Output:**

// ```
//   *     *
//  * *   * *
// *   * *   *
// ```
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;             
    int c=4*n-3;     
    for (int i=1; i<=3; i++) {
        for (int j=1; j<=c; j++) {
            if ((i+j)%4==0 || (i==2 && j%4==0))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
