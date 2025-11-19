// ### 🔸 **ADVANCED LEVEL (11–15)**

// #### 11. Butterfly Pattern

// **Input:** 4
// **Output:**

// ```
// *      *
// **    **
// ***  ***
// ********
// ***  ***
// **    **
// *      *
// ```
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        int gap=(n-i)*2;
        for (int s=0; s<i; s++) cout << "*";
        for (int sp=0; sp<gap; sp++) cout << " ";
        for (int s=0; s<i; s++) cout << "*";
        cout << endl;
    }
    for (int i=n-1; i>=1; i--) {
        int gap=(n-i)*2;
        for (int s=0; s<i; s++) cout << "*";
        for (int sp=0; sp<gap; sp++) cout << " ";
        for (int s=0; s< i; s++) cout << "*";
        cout << endl;
    }
    return 0;
}