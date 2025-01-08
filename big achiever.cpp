
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int n, yes = 1;
		cin >> n;
		if (n == 1)
		{
			cout << yes << endl;
			break;
		}
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int final[n];
		final[0] =1;
		for (int i = 1; i < n; i++)
		{
			bool result = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] < arr[j])
				{
					result = false;
					break;
				}
			}
			if (result == true)
			{
				final[i] = 1;
			}
			else
			{
				final[i] = 0;
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout << final[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
