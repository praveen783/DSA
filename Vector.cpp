#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void solution()
{
    long long n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (q--)
    {
        string s;
        cin >> s;
        if (s == "sort")
        {
            long long l, r;
            cin >> l >> r;
            if (l > r)
            {
                swap(l, r);
            }
             l--;
             r--;
            sort(arr.begin() + l, arr.begin()+r+1); // condition for sorting a range(from L to R) of numbers.
        }
        else if (s == "pop_back")
        {
            arr.pop_back();
        }
        else if (s == "back")
        {
            cout << arr.back() << endl; // condition  for printing last element
        }
        else if (s == "reverse")
        {
            long long p, q;
            cin >> p >> q;
            if (p > q)
            {
                swap(p, q);
            }
            p--;
            q--;
            reverse(arr.begin() + p, arr.begin()+q+1); // condition for reversing a range(from P to Q) of numbers.
        }
        else if (s == "front")
        {
            cout << arr.front() << endl; // function for printing starting element of an array.
        }
        else if (s == "push_back")
        {
            long long y;
            cin >> y;
            arr.push_back(y);
        }
        else
        {
            long long r;
            cin >> r;
            cout << arr[r - 1] << endl;
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
