// Multiplicaion of 2 matrices 

#include <iostream>
using namespace std;
int main()
{
    int n, m, p;
    cin >> n >> m >> p;
    int A[n][m];
    int B[m][p];
    cout << "For 1st matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "For 2nd matrix" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> A[i][j];
        }
    }

    int ans[n][p];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            ans[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < m; k++)
            {
                /* code */

                ans[i][j] += A[i][k] * B[k][j];
            }
        }
    }

for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}