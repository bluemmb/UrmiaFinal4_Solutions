#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	n *= 2;
	int *a = new int[n];
	for (int i = 0; i <n; i++)
	{
		cin>>a[i];
	}
	sort(a, a +n);
	long long int ans = a[0] * a[n - 1];
	for (int i = 0, j = n - 1; i <= j; i++, j--)
	{
		if (a[i] * a[j] != ans)
		{
			cout << "No";
			return 0;
		}
	}
	cout << "Yes" << endl;
	for (int i = 0, j = n - 1; i <= j; i++, j--)
	{
		cout << a[i] << " " << a[j] << endl;
	}
	return 0;
}