(prefix sum is an efficient solution for this question)
#include <iostream>
using namespace std;
void solution()
{
    long long n, m, q;
    cin >> n >> m >> q;
    long long arr[n+1][m+1];
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    long long prefix[n + 1][m + 1];
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; j <= m; j++)
        {
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] + arr[i][j] - prefix[i - 1][j - 1];
        }
    }
    long long x1, y1, x2, y2;
    for (long long i = 0; i < q; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        long long ans = prefix[x2][y2] - prefix[x1 - 1][y2] - prefix[x2][y1 - 1] + prefix[x1 - 1][y1 - 1];
        cout << ans << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solution();
    return 0;
}
