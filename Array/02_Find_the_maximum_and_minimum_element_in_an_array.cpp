// Given an array A of size N, print the reverse of it.

#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	int A[n];
	for (int i = 0; i < n; i++) cin >> A[i];

	int max = A[0];
	int min = A[0];
	for (int i = 1; i < n; i++) {
		if (A[i] < min) min = A[i];
		if (A[i] > max) max = A[i];
	}

	cout << "min = " << min << ", max = " << max;

	return 0;
}
