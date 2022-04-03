#include<bits/stdc++.h>


long long gcd(long long int y, long long int b)
{
	if (b == 0)
		return y;
	return gcd(b, y % b);
}
long long lcm(int y, int b) {
	return (y / gcd(y, b)) * b;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	using namespace std;
	int t, x, k;
	cin >> t;

	while (t--) {
		int min = 0, max = 0;
		cin >> x >> k;
		int i = x, j = x * k;
		min = lcm(i, 2 * i);
		max = lcm(j - 1, j);
		cout << min << ' ' << max << endl;
	}
	return 0;
}