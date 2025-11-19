// #### 14. Hollow Diamond in a Square

// **Input:** 5
// **Output:**
// ```
// *****
// ** **
// *   *
// ** **
// *****
// ```
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || i==n) {
                cout<<"*";
            }
            else if(i==(n+1)/2) {  
                if(j==1 || j==n)
                    cout<<"*";
                else
                    cout<<" ";
            }
            else {                  
                if(j==1 || j==2 || j==n-1 || j==n)
                    cout<<"*";
                else
                    cout<<" ";
            }
        }
        cout<<endl;
    }
}