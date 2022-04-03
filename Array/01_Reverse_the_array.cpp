// Given an array A of size N, print the reverse of it.

#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int A[n];
		for (int i = 0; i < n; i++) cin >> A[i];

		for (int i = 0; i < n / 2; i++) {
			int temp = A[i];
			A[i] = A[n - 1 - i];
			A[n - 1 - i] = temp;
		}

		for (int i = 0; i < n; i++) cout << A[i] << ' ';
		cout << '\n';

	}

	return 0;
}
