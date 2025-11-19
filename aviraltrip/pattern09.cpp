// #### 9. Pascal’s Triangle (Numbers)

// **Input:** 5
// **Output:**

// ```
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// ```
#include <iostream>
using namespace std;
int fact(int n)
{
    int f = 1;
    for (int i=1; i<=n; i++)
        f *= i;
    return f;
}
int nCr(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    int n;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<=i; j++)
        {
            cout << nCr(i,j) << " ";
        }
        cout << endl;
    }
    return 0;
}