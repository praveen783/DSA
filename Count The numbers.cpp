// time complexity(O[1]) because q size is a constant value(10^5) and because of this running a loop is taking O[1] space.
#include <iostream>
#include <map>
#include <vector>
using namespace std;
void solution()
{
    long long n, q;
    cin >> n >> q;
    map<long long, long long> mpp;
    long long z;
    long long x;
    for (long long i = 1; i <= q; i++)
    {
        cin >> z >> x;
        if (z == 1)
        {
            mpp[x]++;
        }
        else
        {
            cout << mpp[x] << endl;
        }
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
