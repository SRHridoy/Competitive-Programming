#include "bits/stdc++.h"
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
const int mx = 112;

int mat[mx][mx];
int n, m;
int cnt = 0;
bool condition(int i, int j)
{
    int curVal = mat[i][j];
    if (curVal > mat[i][j + 1] and curVal > mat[i + 1][j] and curVal > mat[i][j - 1] and curVal > mat[i - 1][j])
    {
        return true;
    }
    return false;
}
void stabilizeAlgorithm(int i, int j)
{
    mat[i][j]--;
    if (condition(i, j))
    {
        stabilizeAlgorithm(i, j);
    }
}

int main()
{
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 1; i <= mx; i++)
        {
            for (int j = 1; j <= mx; j++)
            {
                mat[i][j] = 0;
            }
        }

        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> mat[i][j];
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (condition(i, j))
                {
                    stabilizeAlgorithm(i, j);
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
}
